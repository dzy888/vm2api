// 00634b00 strip_from_array_items

/* craggemini_core[66f3c71560d70857]::server::strip_cache_control::strip_from_array_items */

longlong __rustcall
craggemini_core[66f3c71560d70857]::server::strip_cache_control::strip_from_array_items
          (char *param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong local_68;
  char local_50 [32];
  
  if (param_2 == 0) {
    lVar17 = 0;
  }
  else {
    pcVar10 = param_1 + param_2 * 0x20;
    lVar17 = 0;
    do {
      if (*param_1 == '\x05') {
        plVar1 = (longlong *)(param_1 + 8);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::remove::<str>(local_50,plVar1,"cache_controloutput_configoutput_format",0xd);
        if (local_50[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_50);
          lVar17 = lVar17 + 1;
        }
        lVar5 = *plVar1;
        if (lVar5 != 0) {
          local_68 = *(longlong *)(param_1 + 0x10);
          lVar14 = lVar5;
          while( true ) {
            uVar2 = *(ushort *)(lVar14 + 0x272);
            uVar8 = (ulonglong)((uint)uVar2 * 8);
            lVar18 = uVar8 * 3;
            uVar15 = 0xffffffffffffffff;
            lVar6 = lVar14 + 0x168;
            puVar3 = (undefined8 *)(lVar14 + -8);
            do {
              puVar16 = puVar3;
              uVar9 = (ulonglong)uVar2;
              if (lVar18 == 0) goto joined_r0x00634c4e;
              uVar9 = *(ulonglong *)(lVar6 + 0x10);
              lVar11 = uVar9 - 7;
              if (6 < uVar9) {
                uVar9 = 7;
              }
              iVar4 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar9);
              lVar11 = -lVar11;
              if (iVar4 != 0) {
                lVar11 = (longlong)iVar4;
              }
              bVar7 = (0 < lVar11) - (lVar11 < 0);
              uVar8 = (ulonglong)bVar7;
              uVar15 = uVar15 + 1;
              lVar18 = lVar18 + -0x18;
              lVar6 = lVar6 + 0x18;
              puVar3 = puVar16 + 4;
            } while (bVar7 == 1);
            uVar9 = uVar15;
            if (bVar7 == 0) break;
joined_r0x00634c4e:
            if (local_68 == 0) goto joined_r0x00634ca5;
            local_68 = local_68 + -1;
            lVar14 = *(longlong *)(lVar14 + 0x278 + uVar9 * 8);
          }
          if (*(char *)(puVar16 + 1) == '\x04') {
            lVar5 = strip_from_array_items(puVar16[3],puVar16[4]);
            lVar17 = lVar17 + lVar5;
            lVar5 = *plVar1;
          }
joined_r0x00634ca5:
          if (lVar5 != 0) {
            local_68 = *(longlong *)(param_1 + 0x10);
            lVar14 = lVar5;
            while( true ) {
              uVar2 = *(ushort *)(lVar14 + 0x272);
              uVar8 = (ulonglong)((uint)uVar2 * 8);
              lVar18 = uVar8 * 3;
              uVar15 = 0xffffffffffffffff;
              lVar6 = lVar14 + 0x168;
              puVar3 = (undefined8 *)(lVar14 + -8);
              do {
                puVar16 = puVar3;
                uVar9 = (ulonglong)uVar2;
                if (lVar18 == 0) goto joined_r0x00634d8e;
                uVar9 = *(ulonglong *)(lVar6 + 0x10);
                lVar11 = uVar9 - 5;
                if (4 < uVar9) {
                  uVar9 = 5;
                }
                iVar4 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar9);
                lVar11 = -lVar11;
                if (iVar4 != 0) {
                  lVar11 = (longlong)iVar4;
                }
                bVar7 = (0 < lVar11) - (lVar11 < 0);
                uVar8 = (ulonglong)bVar7;
                uVar15 = uVar15 + 1;
                lVar18 = lVar18 + -0x18;
                lVar6 = lVar6 + 0x18;
                puVar3 = puVar16 + 4;
              } while (bVar7 == 1);
              uVar9 = uVar15;
              if (bVar7 == 0) break;
joined_r0x00634d8e:
              if (local_68 == 0) goto joined_r0x00634dd2;
              local_68 = local_68 + -1;
              lVar14 = *(longlong *)(lVar14 + 0x278 + uVar9 * 8);
            }
            if (*(char *)(puVar16 + 1) == '\x04') {
              lVar5 = strip_from_array_items(puVar16[3],puVar16[4]);
              lVar17 = lVar17 + lVar5;
              lVar5 = *plVar1;
            }
joined_r0x00634dd2:
            if (lVar5 != 0) {
              lVar14 = *(longlong *)(param_1 + 0x10);
              while( true ) {
                uVar2 = *(ushort *)(lVar5 + 0x272);
                uVar8 = (ulonglong)((uint)uVar2 * 8);
                lVar18 = uVar8 * 3;
                uVar15 = 0xffffffffffffffff;
                lVar6 = lVar5 + 0x168;
                pcVar13 = (char *)(lVar5 + -0x20);
                do {
                  pcVar12 = pcVar13;
                  uVar9 = (ulonglong)uVar2;
                  if (lVar18 == 0) goto joined_r0x00634ea9;
                  uVar9 = *(ulonglong *)(lVar6 + 0x10);
                  lVar11 = uVar9 - 8;
                  if (7 < uVar9) {
                    uVar9 = 8;
                  }
                  iVar4 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar9);
                  lVar11 = -lVar11;
                  if (iVar4 != 0) {
                    lVar11 = (longlong)iVar4;
                  }
                  bVar7 = (0 < lVar11) - (lVar11 < 0);
                  uVar8 = (ulonglong)bVar7;
                  pcVar13 = pcVar12 + 0x20;
                  uVar15 = uVar15 + 1;
                  lVar18 = lVar18 + -0x18;
                  lVar6 = lVar6 + 0x18;
                } while (bVar7 == 1);
                uVar9 = uVar15;
                if (bVar7 == 0) break;
joined_r0x00634ea9:
                if (lVar14 == 0) goto LAB_00634b40;
                lVar14 = lVar14 + -1;
                lVar5 = *(longlong *)(lVar5 + 0x278 + uVar9 * 8);
              }
              if (*pcVar13 == '\x05') {
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::remove::<str>(local_50,pcVar12 + 0x28,"cache_controloutput_configoutput_format",
                                0xd);
                if (local_50[0] != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(local_50);
                  lVar17 = lVar17 + 1;
                }
              }
            }
          }
        }
      }
LAB_00634b40:
      param_1 = param_1 + 0x20;
    } while (param_1 != pcVar10);
  }
  return lVar17;
}


