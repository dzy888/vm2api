// 000755b0 skip_to_escape_slow

/* <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape_slow */

void __rustcall
<serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape_slow(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < (ulonglong)param_1[1]) {
    do {
      uVar2 = uVar2 + 1;
      bVar1 = *(byte *)(*param_1 + -1 + uVar2);
      if (bVar1 == 0x22) {
        return;
      }
      if (bVar1 == 0x5c) {
        return;
      }
      if (bVar1 < 0x20) {
        return;
      }
      param_1[2] = uVar2;
    } while (uVar2 != param_1[1]);
  }
  return;
}


