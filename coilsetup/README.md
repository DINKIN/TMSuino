
# Coil Setup

![pattern-unfolded.jpg](../photos/pattern-unfolded.jpg)

This is the coil pattern I designed. The coils are laid out at the circle positions and then connected with tape along the displayed bands.
The lengths of all the bands connecting the coils are all the same. This is by design, to spread the field over the brain.
The size of the pattern should be selected so that the outer coils are just above the ears.
Measure the distance between the ears along the top of the head. Use a measuring tape if available, use a piece of paper and ruler on the paper if not.

If you have a printer avaiable, you can then select one of the following [prepared templates](#prepared-pattern-templates-for-printing), print it and do the cut-out.

For those who need to draw it by hand, here is how to do that:

## Drawing the pattern template by hand

#### Calculating distances A,B,C

Enter your measurement of the ear-to-ear length to calculate the lengths A,B and C:

```html
<ol>
<li>System: <select id="sys" onfocus="greyBandlen()"><option value="0">metric (cm):</option><option value="1">imperial (inch):</option></select>
</li>
<li>
Ear-to-ear distance: <input type="text" id="bandlen" onchange="calcBandlen()" onfocus="greyBandlen()" value="31"/>
</li>
<li>
Coil holder diameter: <input type="text" id="diam" onchange="calcBandlen()" onfocus="greyBandlen()" value="3.6"/>
</li>
<li>Calculate: <input type="button" value="Do it!" onclick="calcBandlen()" />
<div id="calc_result">Result: A=?; B=?; C=?</div>
</li>
</ol>
```

The formulas used internally are: 
```javascript
margin = 3 cm or 2 inch;
A = (ear2ear - margin - diameterCoil)*0.366025;
B = a*0.5;
C = Math.sqrt(Math.pow(a,2)-Math.pow(a*0.5,2));
```

#### Drawing

![pattern with construction lines shown](../images/handdrawing-construction-lines.png)

The bands between the coil circles should be wide enough so the tape does not overflow. Otherwise the tape would later stick to the hair.
Furthermore, if your coils have a large inner diameter center holes might have a use for you. 

## Prepared pattern templates for printing

Following patterns are made for 3.6cm coil holder diameter and 19mm tape width.
Make sure printer dialogs' page setup is set to landscape:
- [coilpattern-29cm-18.9in-A4.pdf](../print-patterns/coilpattern-29cm-18.9in-A4.pdf)
- [coilpattern-30cm-19.5in-A4.pdf](../print-patterns/coilpattern-30cm-19.5in-A4.pdf)
- [coilpattern-31cm-20.2in-A4.pdf](../print-patterns/coilpattern-31cm-20.2in-A4.pdf)
- [coilpattern-32cm-20.8in-A4.pdf](../print-patterns/coilpattern-32cm-20.8in-A4.pdf)
- [coilpattern-33cm-21.5in-A4.pdf](../print-patterns/coilpattern-33cm-21.5in-A4.pdf)
- [coilpattern-34cm-22.1in-A4.pdf](../print-patterns/coilpattern-34cm-22.1in-A4.pdf)
- [coilpattern-35cm-22.8in-A4.pdf](../print-patterns/coilpattern-35cm-22.8in-A4.pdf)

  
## Pattern cut-out

![pattern-unfolded.jpg](../photos/pattern-unfolded.jpg)

Read [here the step-by-step procedure](../cutout/README.md) to reach this cut-out with minimum effort.

## Place coils

After cutting out the shape, place the coils on the circles. Here you need to use double-faced tape to help fix the coils.

![](../photos/pattern-with-double-faced-tape1.jpg)

![](../photos/pattern-with-double-faced-tape2.jpg)

![coils-on-pattern.jpg](../photos/coils-on-pattern.jpg)

![double-faced tape usage](../photos/double-faced-tape.jpg)

#### Run tape between coils

![Tape on holder](../photos/tape-1st.jpg)

![Top fully taped](../photos/first-side-fully-taped.jpg)

Make sure the tape does not overflow the paper template, otherwise hair will later stick to the tape.

#### Turn around and tape other side

![Taped backside](../photos/backside-fully-taped.jpg)

#### Put on head

The coils should not touch the ears, as this gets uncomfortable over time.
Have a look into the mirror, walk around a bit and feel if you are comfortable with it.
Because now is the time to change the size if necessary.

#### Turn to front side again, and this step is done!

![Coils done](../photos/fully-taped.jpg)

## Continue with [wiring](../wiring/README.md)

[Main Page](../README.md)

```html
<style>
        .disabled {
            color: #555555;
            text-decoration: line-through;
        }
        .enabled {
        }
</style>

<script type="text/javascript">

var margin_cm = (3.0);
var margin_in = (2.0);

function calcBandlen() {
    var margin = 0;
    var unit = "unknown";
    if (document.getElementById("sys").value == 0) {
        margin = margin_cm;
        unit = " cm";
    } else {
        margin = margin_in;
        unit = " in";
    }
    var ear2ear = document.getElementById("bandlen").value;
    var diameterCoil = document.getElementById("diam").value;
    var d = ear2ear - margin - diameterCoil;
    var x = 0.366025*d;
    var a = x;
    var c = Math.sqrt(Math.pow(a,2)-Math.pow(a*0.5,2));
    var b = a*0.5;

    var res_string = "Result: A=" + a.toFixed(2) + unit + "; ";
    res_string += "B=" + b.toFixed(2) + unit + "; ";
    res_string += "C=" + c.toFixed(2) + unit;

    document.getElementById("calc_result").innerHTML = res_string;
    ungreyBandlen();
    //generate_svg(a_cm,b_cm,c_cm);
}

function greyBandlen() {
    var namelist = ["calc_result"];
    for (var i=0; i < namelist.length; i++) {
        document.getElementById(namelist[i]).classList.add("btn");
        document.getElementById(namelist[i]).classList.add("disabled");
    }
}

function ungreyBandlen() {
    var namelist = ["calc_result"];
    for (var i=0; i < namelist.length; i++) document.getElementById(namelist[i]).classList.remove("disabled");
}
</script>
```