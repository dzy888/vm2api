// 00754740 parse

/* <gimli[a7f20a324fd82d99]::read::line::FileEntry<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>>::parse */

void __rustcall
<gimli[a7f20a324fd82d99]::read::line::FileEntry<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
::parse(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar8 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    uVar3 = 0x13;
  }
  else {
    uVar5 = uVar8 + uVar2;
    uVar9 = 0;
    uVar7 = 0;
    iVar4 = 0;
    do {
      bVar1 = *(byte *)(uVar8 + uVar9);
      if (iVar4 == 0x3f && 1 < bVar1) {
        *param_2 = uVar8 + uVar9 + 1;
        param_2[1] = ~uVar9 + uVar2;
        uVar3 = 6;
        uVar8 = uVar5;
        goto LAB_007547d2;
      }
      uVar7 = uVar7 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar4 & 0x3f);
      if (-1 < (char)bVar1) {
        uVar5 = uVar8 + uVar9 + 1;
        *param_2 = uVar5;
        param_2[1] = (uVar2 - uVar9) - 1;
        if (uVar2 - 1 == uVar9) goto LAB_00754870;
        uVar5 = (uVar2 - uVar9) + uVar8 + uVar9;
        uVar10 = 0;
        uVar6 = 0;
        goto LAB_00754830;
      }
      iVar4 = iVar4 + 7;
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
    *param_2 = uVar5;
    param_2[1] = 0;
    uVar3 = 0x13;
    uVar8 = uVar5;
  }
LAB_007547d2:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  param_1[2] = uVar8;
  goto LAB_007547ea;
  while( true ) {
    uVar10 = (ulonglong)((int)uVar10 + 7);
    uVar9 = uVar9 + 1;
    if (uVar2 - 1 == uVar9) break;
LAB_00754830:
    bVar1 = *(byte *)(uVar8 + 1 + uVar9);
    if (((int)uVar10 == 0x3f) && (1 < bVar1)) {
      *param_2 = uVar8 + uVar9 + 2;
      param_2[1] = (uVar2 - uVar9) - 2;
      uVar3 = 6;
      goto LAB_0075488c;
    }
    uVar6 = uVar6 | (ulonglong)(bVar1 & 0x7f) << ((byte)uVar10 & 0x3f);
    if (-1 < (char)bVar1) {
      uVar5 = uVar8 + uVar9 + 2;
      *param_2 = uVar5;
      param_2[1] = (uVar2 - uVar9) - 2;
      if (uVar2 - 2 == uVar9) goto LAB_00754930;
      lVar11 = (uVar9 - uVar2) + 3;
      uVar10 = uVar8 + uVar9 + 3;
      uVar5 = uVar8 + uVar9 + (uVar2 - uVar9);
      iVar4 = 0;
      uVar8 = 0;
      goto LAB_007548ef;
    }
  }
  *param_2 = uVar5;
  param_2[1] = 0;
LAB_00754870:
  uVar3 = 0x13;
  uVar10 = uVar5;
LAB_0075488c:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  param_1[2] = uVar10;
  goto LAB_007547ea;
  while( true ) {
    uVar8 = uVar8 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar4 & 0x3f);
    if (-1 < (char)bVar1) {
      *param_2 = uVar10;
      param_2[1] = -lVar11;
      param_1[9] = 0;
      param_1[10] = 0;
      *param_1 = 0x1f;
      param_1[1] = param_3;
      param_1[2] = param_4;
      param_1[3] = 0xffffffffffffffff;
      param_1[6] = uVar7;
      param_1[7] = uVar6;
      param_1[8] = uVar8;
      return;
    }
    iVar4 = iVar4 + 7;
    lVar11 = lVar11 + 1;
    uVar10 = uVar10 + 1;
    if (lVar11 == 1) break;
LAB_007548ef:
    bVar1 = *(byte *)(uVar10 - 1);
    if ((iVar4 == 0x3f) && (1 < bVar1)) {
      *param_2 = uVar10;
      param_2[1] = -lVar11;
      uVar3 = 6;
      goto LAB_00754940;
    }
  }
  *param_2 = uVar5;
  param_2[1] = 0;
LAB_00754930:
  uVar3 = 0x13;
LAB_00754940:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  param_1[2] = uVar5;
LAB_007547ea:
  *param_1 = 0xffffffffffffffff;
  return;
}


