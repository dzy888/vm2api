// 00500010 valid_requested_model_syntax

/* craggemini_core[66f3c71560d70857]::models::valid_requested_model_syntax */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::models::valid_requested_model_syntax
          (undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  
  auVar6 = ::<str>::trim_matches::<<char>::is_whitespace>();
  uVar4 = auVar6._8_8_;
  piVar3 = auVar6._0_8_;
  if (uVar4 - 0x81 < 0xffffffffffffff80) {
    return 0;
  }
  if (uVar4 < 7) {
    lVar5 = 0;
  }
  else {
    param_2 = uVar4 - 7;
    lVar5 = (longlong)piVar3 + 7;
    if ((*(int *)((longlong)piVar3 + 3) != 0x2f736c65 || *piVar3 != 0x65646f6d) &&
       (*(int *)((longlong)piVar3 + 3) != 0x2f534c45 || *piVar3 != 0x45444f4d)) {
      lVar5 = 0;
    }
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar5;
  if (lVar5 != 0) {
    auVar6 = auVar2;
  }
  if ((auVar6._8_8_ == 0) ||
     ((bVar1 = *auVar6._0_8_, 9 < (byte)(bVar1 - 0x30) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)))))
  {
    return 0;
  }
  lVar5 = 0;
  do {
    bVar1 = auVar6._0_8_[lVar5];
    uVar4 = (ulonglong)(bVar1 - 0x30);
    if (9 < (byte)(bVar1 - 0x30)) {
      uVar4 = 0;
      if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
        uVar4 = 0;
        if (0x37 < bVar1 - 0x28) {
          return 0;
        }
        if ((0xa8000000000063U >> ((ulonglong)(bVar1 - 0x28) & 0x3f) & 1) == 0) {
          return 0;
        }
      }
    }
    lVar5 = lVar5 + 1;
    if (auVar6._8_8_ == lVar5) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  } while( true );
}


