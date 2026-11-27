// 00486ad0 restore_snapshots

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::restore_snapshots */

void __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::restore_snapshots
          (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_1d8 [24];
  longlong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  undefined1 local_f8 [168];
  undefined4 local_50;
  
  if (param_3 != 0) {
    lVar11 = param_3 * 200 + param_2;
    do {
      if (param_1[6] != 0) {
        uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 7);
        lVar3 = param_1[3];
        uVar4 = param_1[4];
        bVar14 = (byte)(uVar12 >> 0x39);
        auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
        auVar16 = pshuflw(auVar16,auVar16,0);
        lVar5 = *(longlong *)(param_2 + 0x10);
        lVar13 = 0;
        while( true ) {
          uVar12 = uVar12 & uVar4;
          auVar2 = *(undefined1 (*) [16])(lVar3 + uVar12);
          auVar15[0] = -(auVar2[0] == auVar16[0]);
          auVar15[1] = -(auVar2[1] == auVar16[1]);
          auVar15[2] = -(auVar2[2] == auVar16[2]);
          auVar15[3] = -(auVar2[3] == auVar16[3]);
          auVar15[4] = -(auVar2[4] == auVar16[4]);
          auVar15[5] = -(auVar2[5] == auVar16[5]);
          auVar15[6] = -(auVar2[6] == auVar16[6]);
          auVar15[7] = -(auVar2[7] == auVar16[7]);
          auVar15[8] = -(auVar2[8] == auVar16[0]);
          auVar15[9] = -(auVar2[9] == auVar16[1]);
          auVar15[10] = -(auVar2[10] == auVar16[2]);
          auVar15[0xb] = -(auVar2[0xb] == auVar16[3]);
          auVar15[0xc] = -(auVar2[0xc] == auVar16[4]);
          auVar15[0xd] = -(auVar2[0xd] == auVar16[5]);
          auVar15[0xe] = -(auVar2[0xe] == auVar16[6]);
          auVar15[0xf] = -(auVar2[0xf] == auVar16[7]);
          uVar8 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar15[0xf] >> 7) << 0xf;
          uVar9 = (uint)uVar8;
          if (uVar8 != 0) {
            do {
              uVar6 = 0;
              for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if ((lVar5 == *(longlong *)(lVar3 + -0xd0 + (uVar6 + uVar12 & uVar4) * -0xe0)) &&
                 (iVar10 = (*(code *)PTR_bcmp_00799020)(uVar4,lVar5), iVar10 == 0))
              goto LAB_00486cb7;
              uVar8 = (ushort)(uVar9 - 1) & (ushort)uVar9;
              uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar8);
            } while (uVar8 != 0);
          }
          auVar17[0] = -(auVar2[0] == -1);
          auVar17[1] = -(auVar2[1] == -1);
          auVar17[2] = -(auVar2[2] == -1);
          auVar17[3] = -(auVar2[3] == -1);
          auVar17[4] = -(auVar2[4] == -1);
          auVar17[5] = -(auVar2[5] == -1);
          auVar17[6] = -(auVar2[6] == -1);
          auVar17[7] = -(auVar2[7] == -1);
          auVar17[8] = -(auVar2[8] == -1);
          auVar17[9] = -(auVar2[9] == -1);
          auVar17[10] = -(auVar2[10] == -1);
          auVar17[0xb] = -(auVar2[0xb] == -1);
          auVar17[0xc] = -(auVar2[0xc] == -1);
          auVar17[0xd] = -(auVar2[0xd] == -1);
          auVar17[0xe] = -(auVar2[0xe] == -1);
          auVar17[0xf] = -(auVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x2f,0) & 1) != 0) || (SUB161(auVar17 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
          uVar12 = uVar12 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(local_f8,param_2);
      local_50 = 0;
      (*(code *)PTR_clone_00798fd0)();
      lVar3 = param_1[2];
      if (lVar3 == *param_1) {
        (*(code *)PTR_grow_one_00799328)();
      }
      lVar5 = param_1[1];
      *(undefined8 *)(lVar5 + 0x10 + lVar3 * 0x18) = local_1b0;
      plVar1 = (longlong *)(lVar5 + lVar3 * 0x18);
      *plVar1 = local_1c0;
      plVar1[1] = lStack_1b8;
      param_1[2] = lVar3 + 1;
      (*(code *)PTR_clone_00798fd0)();
      <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
      ::insert(&local_1c0,param_1 + 3,local_1d8,local_f8);
      if (local_1c0 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(&local_1c0);
      }
LAB_00486cb7:
      param_2 = param_2 + 200;
    } while (param_2 != lVar11);
  }
  evict_if_needed(param_1);
  return;
}


