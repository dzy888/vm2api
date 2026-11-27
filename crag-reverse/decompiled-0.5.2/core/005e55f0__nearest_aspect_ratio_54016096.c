// 005e55f0 nearest_aspect_ratio

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::nearest_aspect_ratio */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::tools::nearest_aspect_ratio(uint param_1,uint param_2)

{
  undefined *puVar1;
  double dVar2;
  longlong lVar3;
  undefined *puVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined *local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_60 [8];
  undefined8 local_58;
  longlong local_50;
  double local_48;
  undefined8 uStack_40;
  
  dVar5 = 1.48219693752374e-323;
  puVar4 = &DAT_0019ecb4;
  lVar6 = 0;
  dVar7 = DAT_00185170;
  do {
    lVar6 = lVar6 + 0x10;
    while( true ) {
      puVar1 = *(undefined **)(&UNK_0078e7a0 + lVar6);
      dVar2 = *(double *)(&UNK_0078e7a8 + lVar6);
      local_80 = 0;
      local_68 = 1;
      local_70 = 0x3a0000003a;
      local_90 = puVar1;
      local_88 = dVar2;
      local_78 = dVar2;
      uVar8 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
              ::next_match(local_60,&local_90);
      lVar3 = local_50;
      if (local_60[0] != '\0') break;
      lVar6 = lVar6 + 0x10;
      if (lVar6 == 0xf0) goto LAB_005e5774;
    }
    (*(code *)PTR_from_str_00799c18)(uVar8,local_58);
    local_48 = _s__00185250;
    if ((char)local_90 == '\0') {
      local_48 = local_88;
    }
    uStack_40 = 0;
    (*(code *)PTR_from_str_00799c18)(local_48,(longlong)dVar2 - lVar3);
    dVar9 = _s__00185250;
    if ((char)local_90 == '\0') {
      dVar9 = local_88;
    }
    dVar9 = (double)((ulonglong)(local_48 / dVar9 - (double)param_1 / (double)param_2) &
                    _DAT_00182610);
    if (dVar7 <= dVar9) {
      dVar9 = dVar7;
      puVar1 = puVar4;
      dVar2 = dVar5;
    }
    dVar5 = dVar2;
    puVar4 = puVar1;
    dVar7 = dVar9;
  } while (lVar6 != 0xe0);
LAB_005e5774:
  auVar10._8_8_ = dVar5;
  auVar10._0_8_ = puVar4;
  return auVar10;
}


