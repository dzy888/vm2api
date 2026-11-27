// 005f4930 resolve_client_mcp_call_name

/* craggemini_core[66f3c71560d70857]::tools::resolve_client_mcp_call_name */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::tools::resolve_client_mcp_call_name
          (longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_a8;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    local_a8 = param_2[1];
    while( true ) {
      uVar12 = (ulonglong)*(ushort *)(lVar10 + 0x272);
      uVar7 = (ulonglong)((uint)*(ushort *)(lVar10 + 0x272) * 8);
      lVar16 = uVar7 * 3;
      uVar15 = 0xffffffffffffffff;
      lVar6 = lVar10 + 0x168;
      plVar1 = (longlong *)(lVar10 + -8);
      do {
        plVar14 = plVar1;
        if (lVar16 == 0) goto LAB_005f4a05;
        uVar13 = *(ulonglong *)(lVar6 + 0x10);
        lVar18 = uVar13 - 4;
        if (3 < uVar13) {
          uVar13 = 4;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar7,uVar13);
        lVar18 = -lVar18;
        if (iVar5 != 0) {
          lVar18 = (longlong)iVar5;
        }
        bVar9 = (0 < lVar18) - (lVar18 < 0);
        uVar7 = (ulonglong)bVar9;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + -0x18;
        lVar6 = lVar6 + 0x18;
        plVar1 = plVar14 + 4;
      } while (bVar9 == 1);
      uVar12 = uVar15;
      if (bVar9 == 0) break;
LAB_005f4a05:
      bVar19 = local_a8 == 0;
      local_a8 = local_a8 + -1;
      if (bVar19) goto LAB_005f4b5b;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar12 * 8);
    }
    if ((char)plVar14[1] == '\x03') {
      plVar1 = (longlong *)plVar14[3];
      lVar10 = plVar14[4];
      auVar25 = schema::strip_mcp_prefix(plVar1,lVar10);
      lVar6 = auVar25._8_8_;
      lVar16 = param_3[3];
      if (lVar16 == 0) goto LAB_005f4c90;
      uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
              ::hash_one::<&str>(param_3 + 4,plVar1,lVar10);
      lVar18 = *param_3;
      uVar12 = param_3[1];
      bVar9 = (byte)(uVar7 >> 0x39);
      auVar20 = ZEXT216(CONCAT11(bVar9,bVar9));
      auVar20 = pshuflw(auVar20,auVar20,0);
      lVar11 = 0;
      while( true ) {
        uVar7 = uVar7 & uVar12;
        auVar22 = *(undefined1 (*) [16])(lVar18 + uVar7);
        auVar21[0] = -(auVar22[0] == auVar20[0]);
        auVar21[1] = -(auVar22[1] == auVar20[1]);
        auVar21[2] = -(auVar22[2] == auVar20[2]);
        auVar21[3] = -(auVar22[3] == auVar20[3]);
        auVar21[4] = -(auVar22[4] == auVar20[4]);
        auVar21[5] = -(auVar22[5] == auVar20[5]);
        auVar21[6] = -(auVar22[6] == auVar20[6]);
        auVar21[7] = -(auVar22[7] == auVar20[7]);
        auVar21[8] = -(auVar22[8] == auVar20[0]);
        auVar21[9] = -(auVar22[9] == auVar20[1]);
        auVar21[10] = -(auVar22[10] == auVar20[2]);
        auVar21[0xb] = -(auVar22[0xb] == auVar20[3]);
        auVar21[0xc] = -(auVar22[0xc] == auVar20[4]);
        auVar21[0xd] = -(auVar22[0xd] == auVar20[5]);
        auVar21[0xe] = -(auVar22[0xe] == auVar20[6]);
        auVar21[0xf] = -(auVar22[0xf] == auVar20[7]);
        uVar4 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
        uVar17 = (uint)uVar4;
        if (uVar4 != 0) {
          do {
            uVar2 = 0;
            for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            if ((lVar10 == *(longlong *)(lVar18 + -0x20 + (uVar2 + uVar7 & uVar12) * -0x30)) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(lVar11,lVar10), iVar5 == 0)) goto LAB_005f4c6d;
            uVar4 = (ushort)(uVar17 - 1) & (ushort)uVar17;
            uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar4);
          } while (uVar4 != 0);
        }
        auVar23[0] = -(auVar22[0] == -1);
        auVar23[1] = -(auVar22[1] == -1);
        auVar23[2] = -(auVar22[2] == -1);
        auVar23[3] = -(auVar22[3] == -1);
        auVar23[4] = -(auVar22[4] == -1);
        auVar23[5] = -(auVar22[5] == -1);
        auVar23[6] = -(auVar22[6] == -1);
        auVar23[7] = -(auVar22[7] == -1);
        auVar23[8] = -(auVar22[8] == -1);
        auVar23[9] = -(auVar22[9] == -1);
        auVar23[10] = -(auVar22[10] == -1);
        auVar23[0xb] = -(auVar22[0xb] == -1);
        auVar23[0xc] = -(auVar22[0xc] == -1);
        auVar23[0xd] = -(auVar22[0xd] == -1);
        auVar23[0xe] = -(auVar22[0xe] == -1);
        auVar23[0xf] = -(auVar22[0xf] == -1);
        if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x1f,0) & 1) != 0) || (SUB161(auVar23 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
        uVar7 = uVar7 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      }
      uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
              ::hash_one::<&str>(param_3 + 4,auVar25._0_8_,lVar6);
      bVar9 = (byte)(uVar7 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar9,bVar9));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar11 = 0;
      do {
        uVar7 = uVar7 & uVar12;
        auVar20 = *(undefined1 (*) [16])(lVar18 + uVar7);
        auVar22[0] = -(auVar20[0] == auVar25[0]);
        auVar22[1] = -(auVar20[1] == auVar25[1]);
        auVar22[2] = -(auVar20[2] == auVar25[2]);
        auVar22[3] = -(auVar20[3] == auVar25[3]);
        auVar22[4] = -(auVar20[4] == auVar25[4]);
        auVar22[5] = -(auVar20[5] == auVar25[5]);
        auVar22[6] = -(auVar20[6] == auVar25[6]);
        auVar22[7] = -(auVar20[7] == auVar25[7]);
        auVar22[8] = -(auVar20[8] == auVar25[0]);
        auVar22[9] = -(auVar20[9] == auVar25[1]);
        auVar22[10] = -(auVar20[10] == auVar25[2]);
        auVar22[0xb] = -(auVar20[0xb] == auVar25[3]);
        auVar22[0xc] = -(auVar20[0xc] == auVar25[4]);
        auVar22[0xd] = -(auVar20[0xd] == auVar25[5]);
        auVar22[0xe] = -(auVar20[0xe] == auVar25[6]);
        auVar22[0xf] = -(auVar20[0xf] == auVar25[7]);
        uVar4 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
        uVar17 = (uint)uVar4;
        if (uVar4 != 0) {
          do {
            uVar2 = 0;
            for (uVar3 = uVar17; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            if ((lVar6 == *(longlong *)(lVar18 + -0x20 + (uVar2 + uVar7 & uVar12) * -0x30)) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(lVar6,lVar6), iVar5 == 0)) {
LAB_005f4c6d:
              (*(code *)PTR_clone_00798fd0)();
              return param_1;
            }
            uVar4 = (ushort)(uVar17 - 1) & (ushort)uVar17;
            uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar4);
          } while (uVar4 != 0);
        }
        auVar24[0] = -(auVar20[0] == -1);
        auVar24[1] = -(auVar20[1] == -1);
        auVar24[2] = -(auVar20[2] == -1);
        auVar24[3] = -(auVar20[3] == -1);
        auVar24[4] = -(auVar20[4] == -1);
        auVar24[5] = -(auVar20[5] == -1);
        auVar24[6] = -(auVar20[6] == -1);
        auVar24[7] = -(auVar20[7] == -1);
        auVar24[8] = -(auVar20[8] == -1);
        auVar24[9] = -(auVar20[9] == -1);
        auVar24[10] = -(auVar20[10] == -1);
        auVar24[0xb] = -(auVar20[0xb] == -1);
        auVar24[0xc] = -(auVar20[0xc] == -1);
        auVar24[0xd] = -(auVar20[0xd] == -1);
        auVar24[0xe] = -(auVar20[0xe] == -1);
        auVar24[0xf] = -(auVar20[0xf] == -1);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_005f4c90:
          if ((lVar6 != lVar10) || (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 != 0)) {
            if (schema::global_tool_name_cache::CACHE._112_4_ != 0) {
              <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>
              ::initialize::
              <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::_closure_0_,_>
                        (schema::global_tool_name_cache::CACHE);
            }
            <craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::resolve
                      (param_1,schema::global_tool_name_cache::CACHE,1,0,plVar1,lVar10);
            if (*param_1 != -1) {
              return param_1;
            }
          }
          if ((((lVar16 != 0) && (lVar10 == 0xd)) &&
              (*(longlong *)((longlong)plVar1 + 5) == 0x6c6f6f745f70636d &&
               *plVar1 == 0x70636d5f6c6c6163)) &&
             ((pcVar8 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::get::<str>(param_2,"args",4), pcVar8 != (char *)0x0 &&
              (*pcVar8 == '\x05')))) {
            resolve_client_mcp_call_name::_closure_1_
                      (param_1,param_3,*(undefined8 *)(pcVar8 + 8),*(undefined8 *)(pcVar8 + 0x10));
            return param_1;
          }
          break;
        }
        uVar7 = uVar7 + lVar11 + 0x10;
        lVar11 = lVar11 + 0x10;
      } while( true );
    }
  }
LAB_005f4b5b:
  *param_1 = -1;
  return param_1;
}


