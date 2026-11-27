// 000aa8ee entry

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<u64,
   gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::entry */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>
::entry(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 0;
    return;
  }
  lVar3 = param_2[1];
  do {
    lVar5 = (ulonglong)*(ushort *)(lVar2 + 0x532) << 3;
    uVar4 = 0xffffffffffffffff;
    do {
      if (lVar5 == 0) {
        uVar4 = (ulonglong)*(ushort *)(lVar2 + 0x532);
        goto LAB_000aa943;
      }
      uVar1 = *(ulonglong *)(lVar2 + 0x4e0 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + -8;
    } while ((char)((uVar1 < param_3) - (param_3 < uVar1)) == '\x01');
    if (uVar1 < param_3 == param_3 < uVar1) {
      param_1[1] = lVar2;
      param_1[2] = lVar3;
      param_1[3] = uVar4;
      param_1[4] = param_2;
      *param_1 = 0;
      return;
    }
LAB_000aa943:
    bVar6 = lVar3 == 0;
    lVar3 = lVar3 + -1;
    if (bVar6) {
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = lVar2;
      param_1[3] = 0;
      param_1[4] = uVar4;
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x538 + uVar4 * 8);
  } while( true );
}


