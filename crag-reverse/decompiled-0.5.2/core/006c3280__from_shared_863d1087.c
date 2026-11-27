// 006c3280 from_shared

/* <http[56314f485c23ccf6]::uri::path::PathAndQuery>::from_shared */

longlong * __rustcall
<http[56314f485c23ccf6]::uri::path::PathAndQuery>::from_shared(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined1 uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  char cVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined1 uStack_4f;
  undefined4 uStack_4c;
  
  pbVar9 = (byte *)param_2[1];
  puVar5 = (undefined *)param_2[2];
  if (puVar5 == (undefined *)0x0) {
    uVar8 = 10;
    goto LAB_006c3308;
  }
  uVar8 = 9;
  if ((undefined *)0xfffe < puVar5) goto LAB_006c3308;
  uVar10 = (ulonglong)pbVar9 >> 8;
  bVar1 = *pbVar9;
  if (puVar5 != (undefined *)0x1 || bVar1 != 0x2a) {
    uVar8 = 8;
    if ((bVar1 < 0x40) && ((0x8000800800000000U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) != 0)) {
      puVar6 = (undefined *)0x0;
      puVar12 = &DAT_001a8409;
      cVar11 = '\0';
LAB_006c3378:
      switch((&DAT_001a8409)[pbVar9[(longlong)puVar6]]) {
      case 0:
        goto switchD_006c3393_caseD_0;
      case 1:
        puVar12 = puVar6 + 1;
        if (puVar12 < puVar5) goto LAB_006c33bb;
        goto LAB_006c33d9;
      case 2:
        puVar12 = (undefined *)((ulonglong)puVar6 & 0xffffffff);
        bVar3 = true;
        puVar6 = (undefined *)0xffff;
        goto LAB_006c33e8;
      case 3:
        goto switchD_006c3393_caseD_3;
      default:
        goto switchD_006c3393_default;
      }
    }
    goto LAB_006c3308;
  }
  uVar4 = 0xffff;
  puVar5 = (undefined *)0x1;
  goto LAB_006c32d4;
switchD_006c3393_caseD_3:
  cVar11 = '\x01';
switchD_006c3393_caseD_0:
  puVar6 = puVar6 + 1;
  if (puVar5 == puVar6) goto LAB_006c339b;
  goto LAB_006c3378;
LAB_006c339b:
  puVar6 = (undefined *)0xffff;
  goto LAB_006c33d9;
switchD_006c3393_default:
  uVar8 = 0;
LAB_006c3308:
  *(undefined1 *)(param_1 + 1) = uVar8;
  *param_1 = 0;
  (**(code **)(*param_2 + 0x20))();
  return param_1;
  while (puVar12 = puVar12 + 1, puVar5 != puVar12) {
LAB_006c33bb:
    cVar2 = (&DAT_001a8509)[pbVar9[(longlong)puVar12]];
    if (cVar2 != '\0') {
      if (cVar2 != '\x03') {
        if (cVar2 != '\x02') goto switchD_006c3393_default;
        bVar3 = true;
        goto LAB_006c33e8;
      }
      cVar11 = '\x01';
    }
  }
LAB_006c33d9:
  bVar3 = false;
LAB_006c33e8:
  uVar4 = SUB82(puVar6,0);
  uStack_4f = (undefined1)((ulonglong)puVar12 >> 8);
  uStack_4c = CONCAT31(uStack_4c._1_3_,cVar11);
  if ((!bVar3) ||
     (puVar6 = (undefined *)
               (ulonglong)((CONCAT21(uVar4,uStack_4f) & 0xff) << 8 | (uint)puVar12 & 0xff),
     puVar5 <= puVar6)) {
    if (cVar11 != '\0') goto LAB_006c34e7;
  }
  else if (((undefined *)*param_2 == PTR_PROMOTABLE_EVEN_VTABLE_0079a578) ||
          ((undefined *)*param_2 == PTR_PROMOTABLE_ODD_VTABLE_0079a580)) {
    (*(code *)PTR_split_off_0079a570)(puVar6,puVar6);
    (**(code **)(CONCAT44(uStack_4c,CONCAT22(uVar4,(short)puVar12)) + 0x20))();
    if (cVar11 != '\0') {
      pbVar9 = (byte *)param_2[1];
      puVar5 = (undefined *)param_2[2];
      goto LAB_006c34e7;
    }
    pbVar9 = (byte *)(ulonglong)*(byte *)(param_2 + 1);
    uVar10 = (ulonglong)*(uint7 *)((longlong)param_2 + 9);
    puVar5 = (undefined *)param_2[2];
  }
  else {
    param_2[2] = (longlong)puVar6;
    puVar5 = puVar6;
    if (cVar11 != '\0') {
LAB_006c34e7:
      lVar7 = *param_2;
      lVar13 = param_2[3];
      (*(code *)PTR_from_utf8_00799468)();
      if (CONCAT22(uVar4,(short)puVar12) == 1) {
        (**(code **)(lVar7 + 0x20))();
LAB_006c352b:
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0;
        return param_1;
      }
      if (lVar7 == 0) goto LAB_006c352b;
      uVar8 = SUB81(pbVar9,0);
      uVar10 = (ulonglong)pbVar9 >> 8;
      goto LAB_006c32db;
    }
  }
LAB_006c32d4:
  uVar8 = SUB81(pbVar9,0);
  lVar7 = *param_2;
  lVar13 = param_2[3];
LAB_006c32db:
  *param_1 = lVar7;
  *(undefined1 *)(param_1 + 1) = uVar8;
  *(int *)((longlong)param_1 + 9) = (int)uVar10;
  *(char *)((longlong)param_1 + 0xf) = (char)(uVar10 >> 0x30);
  *(short *)((longlong)param_1 + 0xd) = (short)(uVar10 >> 0x20);
  param_1[2] = (longlong)puVar5;
  param_1[3] = lVar13;
  *(undefined2 *)(param_1 + 4) = uVar4;
  return param_1;
}


