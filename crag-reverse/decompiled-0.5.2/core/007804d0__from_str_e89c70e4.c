// 007804d0 from_str

/* <core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv4Addr as
   core[c0acaeba6ab4c2e0]::str::traits::FromStr>::from_str */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv4Addr_as_core[c0acaeba6ab4c2e0]::str::traits::FromStr>::
from_str(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 local_18;
  ulonglong local_10;
  
  if (param_2 < 0x10) {
    local_18 = param_1;
    local_10 = param_2;
    uVar1 = <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv4_addr(&local_18);
    bVar3 = (byte)uVar1 & local_10 == 0;
    bVar2 = bVar3 ^ 1;
    uVar4 = 0x100;
    if (bVar3 != 0) {
      uVar4 = uVar1;
    }
    bVar3 = (byte)((ulonglong)uVar4 >> 8);
    param_3 = (ulonglong)((uint)((ulonglong)uVar4 >> 0x10) & 0xffffff);
  }
  else {
    bVar3 = 1;
    bVar2 = 1;
  }
  return (ulonglong)bVar2 | (ulonglong)bVar3 << 8 | param_3 << 0x10;
}


