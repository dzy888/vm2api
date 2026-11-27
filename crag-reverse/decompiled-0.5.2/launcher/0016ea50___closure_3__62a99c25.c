// 0016ea50 {closure#3}

/* craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync::{closure#3} */

longlong __rustcall
craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync::_closure_3_
          (longlong param_1,ulonglong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  bVar1 = false;
  lVar4 = param_1;
  uVar3 = param_2;
  do {
    lVar5 = param_1;
    bVar7 = bVar1;
    while( true ) {
      param_1 = lVar5;
      uVar2 = uVar3;
      if (bVar7) {
        return 0;
      }
      if (uVar2 == 0) break;
      uVar6 = 0;
      while ((0x20 < (ulonglong)*(byte *)(param_1 + uVar6) ||
             ((0x100003600U >> ((ulonglong)*(byte *)(param_1 + uVar6) & 0x3f) & 1) == 0))) {
        uVar6 = uVar6 + 1;
        if (uVar2 == uVar6) {
          bVar1 = true;
          goto LAB_0016eafc;
        }
      }
      param_2 = ~uVar6 + uVar2;
      lVar4 = param_1 + uVar6 + 1;
      bVar7 = false;
      uVar3 = param_2;
      lVar5 = lVar4;
      if (uVar6 != 0) {
        param_2 = ~uVar6 + uVar2;
        lVar4 = param_1 + uVar6 + 1;
        goto LAB_0016eafc;
      }
    }
    bVar1 = true;
    uVar3 = 0;
  } while( true );
LAB_0016eafc:
  lVar5 = lVar4;
  if (bVar1) {
    return 0;
  }
  bVar1 = true;
  lVar4 = lVar5;
  if (param_2 == 0) {
    uVar3 = 0;
    param_2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (((ulonglong)*(byte *)(lVar5 + uVar2) < 0x21) &&
         ((0x100003600U >> ((ulonglong)*(byte *)(lVar5 + uVar2) & 0x3f) & 1) != 0)) {
        uVar3 = param_2 + ~uVar2;
        bVar1 = false;
        param_2 = uVar2;
        lVar4 = lVar5 + uVar2 + 1;
        goto LAB_0016eaf7;
      }
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    uVar3 = param_2;
  }
LAB_0016eaf7:
  bVar7 = param_2 != 0;
  param_2 = uVar3;
  if (bVar7) {
    return lVar5;
  }
  goto LAB_0016eafc;
}


