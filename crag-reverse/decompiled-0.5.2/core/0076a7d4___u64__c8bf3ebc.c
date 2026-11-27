// 0076a7d4 <u64>

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<u64,
   gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::get::<u64> */

longlong __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>
::get::<u64>(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = param_1[1];
  uVar1 = *param_2;
  do {
    uVar5 = 0xffffffffffffffff;
    lVar6 = 0;
    do {
      if ((ulonglong)*(ushort *)(lVar3 + 0x532) * 0x70 + lVar6 == 0) {
        uVar5 = (ulonglong)*(ushort *)(lVar3 + 0x532);
        goto LAB_0076a82e;
      }
      uVar2 = *(ulonglong *)(lVar3 + 0x4e0 + uVar5 * 8);
      lVar6 = lVar6 + -0x70;
      uVar5 = uVar5 + 1;
    } while ((char)((uVar2 < uVar1) - (uVar1 < uVar2)) == '\x01');
    if (uVar2 < uVar1 == uVar1 < uVar2) {
      return (lVar3 - lVar6) + -0x70;
    }
LAB_0076a82e:
    bVar7 = lVar4 == 0;
    lVar4 = lVar4 + -1;
    if (bVar7) {
      return 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x538 + uVar5 * 8);
  } while( true );
}


