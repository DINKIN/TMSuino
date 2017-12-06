
Communication
========

To communicate with others is a large problem for bipolar disorder patients.

Mental disorders, as long as it's not a fashionable "burn out", are heavily stigmatized.

As governments and companies collect and monitor any communciations of individuals and groups, anonymity becomes problematic.

A lot of people fear to have their career hampered, their relationships destroyed, their credibility questioned in legal proceedings -
due to their bipolar disorder becoming a piece of gossip.

## Proposed Workaround

A first approach to tackle this problem is given by the [BitMessage](https://bitmessage.org) network.

With BitMessage all messages are sent to every network member. But only intended recipients (and the sender) are able to decrypt and read them.
By keeping your name and any other identifying information out of your messages, you can be reasonably sure to stay anonymous, hiding in the midst of all network members.

Addresses are pseudonymous, like BitCoin addresses. You can and should create as many addresses as you like, and dispose them frequently.
With BitMessage all messages are encrypted completely, there are no unencrypted fields.
Sending and recieving messages uses technology **inspired** by the [Tor](https://www.torproject.org) network.

**For _testing_ I have created a BitMessage "mailing list" (password "bipolar talk") with address: _BM-2cVPtJZn7mBTUnjKrY4sDgAkMZKS1fcZsM_**

## Important Notices

1. As of this moment, I do not recommend to use any other software than the [PyBitMessage](https://github.com/Bitmessage/PyBitmessage) reference implementation.
  Other implementations seem to subversively undermine anonymization: 
  They don't download a message completely, if it cannot be decrypted. 
  But the software should give no hint to the outside world, if its user is a messages' intended recipient or not. 
  With this "optimization" though anonymization is i.m.h.o. effectively destroyed.

2. I recommend running the [Tor Browser](https://www.torproject.org/projects/torbrowser.html.en) and to pipe your BitMessage client through Tor.
  That way it is hard to identify you as a participant of BitMessage network.

2. Also, while an interesting concept, BitMessage is a rather young and unproven technology. 
  Its user base and adoption has still to reach maturity.

3. I also recommend to consider using the [Tor Browser](https://www.torproject.org/projects/torbrowser.html.en) for internet surfing.


