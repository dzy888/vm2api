// 0045ef90 parse_ident

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::parse_ident
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
parse_ident(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 local_18 [3];
  
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  lVar5 = 0;
  while( true ) {
    if (param_3 == lVar5) {
      return 0;
    }
    if (*(ulonglong *)(param_1 + 0x20) <= uVar4) break;
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x18) + uVar4);
    uVar4 = uVar4 + 1;
    *(ulonglong *)(param_1 + 0x28) = uVar4;
    pcVar1 = (char *)(param_2 + lVar5);
    lVar5 = lVar5 + 1;
    if (cVar2 != *pcVar1) {
      local_18[0] = 9;
LAB_0045efe2:
      uVar3 = error(param_1,local_18);
      return uVar3;
    }
  }
  local_18[0] = 5;
  goto LAB_0045efe2;
}


