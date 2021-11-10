# This file will summary some info about iptable
- iptable is simply a firewall of Linux
- Control the traffic from And to your server using TABLE
- Table contains a set of rules - or CHAIN: filter packet

Packet--a Rule-->Passed => Target

- Target can be another chain or one these value"
    + ACCEPT: Pass through
    + DROP: Deny
    + RETURN: Go back to previous chain

- One of default table: FILTER. Three chains:
    + INPUT: control incoming packet
    + FORWARD: filters incoming packet before forward 
    + OUTPUT: filters packet going out from server
    ;
 