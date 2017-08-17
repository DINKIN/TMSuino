
# Rationale - You don't need to read this. 
# This is only for people who want to know all the details.

### Coils

The six coils are intentionally over-sized. For three reasons:

1. To avoid soldering a decent wire thickness is needed, so a normal jumper cable clip can be used to connect the coils and the arduino.

2. Each field should be applied perpendicular to the skull. Therefore hair has to be *flattened* - a heavy coil has just this effect.

3. A larger coil diameter also supports the perpendicular constraint.

If you can achieve these constraints in any other way  (e.g. bald applicant and no problems with soldering), you can even use a 0.1mm enameled copper wire and wind it into a coil yourself - effectively reducing costs by another $10.
My current spec for coils is: field strength 0.82-0.85 mH, wire thickness 0.6 mm, holder diameter 35-40mm, resistance 1.0-1.3 Ohm, wire ends tin-coated, inner diameter 5-25mm.
Of course this mentioned field strength is never achieved by the Arduino. How strong the field actually is has to be carefully measured with appropriate equipment. This is still an open issue.

### Arduino

The arduino has been used since it is a simple platform already widely used by hobbyists. Essentially any microcontroller able to provide 500mA at 5V on at least 6 digital outputs could be used. 
The arduinos' analog pins have originally been introduced as a solderless and breadbord-less way to connect 6 coils to ground. 
The testing routine was introduced later on, as wear and tear could loosen the jumper connections.

If you are able to solder lasting connections you can just connect all coils to ground instead of the analog pins. This would allow you to use an even smaller microcontroller board (e.g. ATtiny85 based like the Digispark Mini) - reducing costs by another $10. You would have to remove the testing routine from the source code, of course.

### Short jumper cables

Soldering is a dramatic hurdle - for normal people. So jumper cables are a must.

Typical jumper cables included in Arduino kits and available at hobbyist stores are too short to keep the arduino off the head.
As it turns out that is not much of a hurdle. If the USB cable is too heavy, a direct 9V DC power adapter typically comes with lighter cabling.

### Cloth tape

High quality tapes provide a decent look and feel and allow a perfectly custom-sized cap for everyone.
A tape is much cleaner to apply than glue. Many people already have it, while others will find it useful to have it.
On the paper cut-out it is relatively easy to make connections of the desired length. 

Still, in some countries tape is relatively expensive. Of course, you can use strips of cloth and knot the coils together.
It's just harder to get all the distances right. You may use safety pins, as long as these are used as far away from each coil as possible.
*And* make sure the coils don't fold down unnoticed, as the direction of the magnetic field has to be the same for all coil positions. 
Especially the two outer coils are in danger of being twisted if strips of cloth are used.

### Paper pattern

It is needed to make the taping viable (we don't want to stick everything to the table). It also makes it very clear what is intended and just makes things easier.
Since the coils are put on top of the paper the intended orientation of each coil is always visible, preventing unnoticed fold downs. 
Of course, you could use a laser cutter and/or some other material than paper - which would allow you to use less tape or no tape at all. 
The SVG files created by the [pattern maker](https://github.com/TMSuino/pattern-maker) can be used as a starting point for laser cutter files.

### USB power / battery

The arduinos' double power source options are great for this. 
Many people have USB power adapters from smartphones or other devices. These can be re-used. 
And if you need to go camping a 9V battery should be able to run the device for a few hours - should be enough for a few days in the wild.

### Wishlist

There are a few things I would like to change.

* Connecting the coils is currently a big opportunity for mistakes. I believe it is too easy to confuse outer- and inner wire ends, and have problems with plugging the jumpers deep enough. And keeping the jumpers on the wire ends by huge amounts of tape is not optimal.

A solution would be to equip each coil with a LED. I envision a tiny PCB with two pins, a resistor and a LED which is soldered onto the coil holder by its manufacturer.
Due to the LED, the cable order cannot be confused. And people could visibly see if their device is plugged in correct order.

Again if you find a distributor/producer willing and capable to produce such parts - make sure to let me know.


[Main Page](../README.md)
