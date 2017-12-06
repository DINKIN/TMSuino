
A brain region has been identified that, if stimulated, cancels bipolar disorder.
Proof to this is that there are no brain scans of bipolar disorder patients available to the public.
See for yourself: Here is the [list of publicly available brain scan datasets](http://www.nature.com/neuro/journal/v17/n11/fig_tab/nn.3818_T1.html).
There's a lot, sometimes thousands of scans, for practically any mental ailment known to man - **except bipolar disorder**.
Clearly someone doesn't want that data to be known. I believe this is done to keep the number of competing researchers at bay.

Interestingly this situation is going on for several years now. It seems that drugs for activating said brain region are very hard to develop.

I propose to take a fundamentally different approach. The brain can be stimulated using magnetic fields.
And magnetic fields can be easily shaped to target the brain region in question.

As we are all experts in our specific fields, and far less experienced in others, I understand that pharma researchers might be no experts in electronics.
For that reason I have created a simple brain stimulation device researchers can use as a starting point.

Costs for parts, materials and shipping should be around 100,- dollars/euros.
Here is the step-by-step procedure, estimated assembly time is 2 hours.

TMSuino
=======

_A low-cost arduino-based TMS ([transcranial magnetic stimulation](https://en.wikipedia.org/wiki/Transcranial_magnetic_stimulation)) device to influence the symptoms of bipolar disorder._

## Table of contents

- [Getting Started](#getting-started)
  - [The Picture](#picture)
  - [Prerequisites](#prerequisites)
- [Building it](#building-it)
- [Rationale](#rationale)
- [License and Disclaimer](#license-and-disclaimer)
- [Contributions and Questions](#contributions-and-questions)
- [Communication](#communication)

## Getting Started

Despite over 30 years of activity and over 500 patents **transcranial magnetic stimulation** hasn't yet found broad adoption.

It is my personal opinion that the reasons for this are two-fold:

1. On-going dispute about it being a placebo effect - due to a lack of provable scientific explanations

2. High costs - due to a focus on complex research devices

This projects' focus is on the second point: Drastically cutting down costs.

This is achieved using an Arduino UNO as the main driver module. Overall cost of parts is below 63 Euros ($75 as of August 2017), but shipping increases that to about 100,- Euros/Dollars.

The device requires no soldering, tools needed are a pair of scissors and a measuring tape / ruler / yardstick.

### Picture

Here's a picture of the thing:

![TMSuino](photos/the-thing4.jpg)

It is worn like a cap:

![TMSuino on head](photos/how-to-wear-rightside.jpg)

### Prerequisites

1. Arduino UNO R3 - as driver module

2. Six coreless coils - to create magnetic fields

3. Jumper cables - for wiring the coils to the arduino

4. Active Buzzer - for informational sounds

5. Cloth tape - to put everything together

6. Double faced tape - to fix the coils onto the cap

7. Tools: A sturdy pair of scissors - for all cutting tasks

8. Optional tools: A printer - to print the placement pattern

9. Optional parts: USB power adapter or 9V power adapter or 9V battery holder - as alternative power sources

[For more details read the part list](partlist/README.md)

## Building it

It takes about two hours to build the device:

1. Making the cap<br/>
  [For more details see coil setup procedure](coilsetup/README.md)

2. Wiring<br/>
  [For more details see the wiring description](wiring/README.md)

3. Arduino Code<br/>
  [For more details see the code readme](code/README.md)<br/>
  [And if problems persist the troubleshooting readme](troubleshooting/README.md)

4. Fixing jumper cables<br/>
  [See the details on fixing here](fixing/README.md)

## Rationale

If you are curious why mentioned parts and materials where selected, [read the details in the rationale](rationale/README.md).
But you don't need to know this to build and use the device.

## License and Disclaimer

For anything to be low-cost it must be open-source. Otherwise third parties will always take their share.

Therefore this work is licensed under CC0; putting all of it into the public domain. See the [full text of CC0 here](License-CC0.txt).

## Legal issue

For legal reasons every person that wants to try this device has to build it by themselves.

## Contributions and Questions

Are welcome. Please see the [contributing and questions section](contributing/README.md) for more. 

## Communication

A proposal can be found in [our communications section](communication/README.md).

