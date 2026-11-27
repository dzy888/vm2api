// 0077fc60 from_str

/* <core[c0acaeba6ab4c2e0]::net::ip_addr::IpAddr as
   core[c0acaeba6ab4c2e0]::str::traits::FromStr>::from_str */

undefined2 * __rustcall
<core[c0acaeba6ab4c2e0]::net::ip_addr::IpAddr_as_core[c0acaeba6ab4c2e0]::str::traits::FromStr>::
from_str(undefined2 *param_1,undefined8 param_2,longlong param_3)

{
  undefined7 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined8 local_38;
  longlong local_30;
  char local_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  undefined4 local_20;
  undefined1 uStack_1c;
  undefined4 local_1b;
  
  local_38 = param_2;
  local_30 = param_3;
  uVar3 = <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv4_addr(&local_38);
  if ((uVar3 & 1) == 0) {
    <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv6_addr(&local_28,&local_38);
    uVar2 = uStack_27;
    if (local_28 == '\x01') {
      uVar1 = CONCAT43(local_20,uStack_23);
      if (local_30 == 0) {
        local_20 = local_1b;
        local_28 = (char)uStack_23;
        uStack_27 = (undefined4)((uint7)uVar1 >> 8);
        uStack_23 = (undefined3)(CONCAT17(uStack_1c,uVar1) >> 0x28);
        uVar4 = 1;
        goto LAB_0077fccb;
      }
    }
  }
  else if (local_30 == 0) {
    uVar2 = (undefined4)(uVar3 >> 8);
    uVar4 = 0;
LAB_0077fccb:
    *(undefined4 *)((longlong)param_1 + 0xd) = local_20;
    *(ulonglong *)((longlong)param_1 + 5) = CONCAT35(uStack_23,CONCAT41(uStack_27,local_28));
    *(undefined1 *)param_1 = uVar4;
    *(undefined4 *)((longlong)param_1 + 1) = uVar2;
    return param_1;
  }
  *param_1 = 2;
  return param_1;
}


