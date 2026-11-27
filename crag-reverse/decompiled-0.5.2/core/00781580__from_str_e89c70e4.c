// 00781580 from_str

/* <core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv6Addr as
   core[c0acaeba6ab4c2e0]::str::traits::FromStr>::from_str */

undefined1 * __rustcall
<core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv6Addr_as_core[c0acaeba6ab4c2e0]::str::traits::FromStr>::
from_str(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  byte local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  longlong local_18;
  
  local_20 = param_2;
  local_18 = param_3;
  <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv6_addr(&local_31,&local_20);
  if ((local_18 == 0) && ((local_31 & 1) != 0)) {
    *(undefined8 *)(param_1 + 1) = local_30;
    *(undefined8 *)(param_1 + 9) = uStack_28;
    uVar1 = 0;
  }
  else {
    param_1[1] = 2;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return param_1;
}


