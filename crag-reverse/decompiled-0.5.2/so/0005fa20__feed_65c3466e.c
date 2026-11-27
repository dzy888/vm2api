// 0005fa20 feed

/* <agy_bridge[64a9e9deac6c45ce]::shm::ChunkReassembler>::feed */

longlong * __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ChunkReassembler>::feed
          (undefined4 param_1,longlong *param_2,ulonglong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = *(uint *)(param_4 + 3);
  if ((uVar3 & 0xc0000000) == 0xc0000000) {
    lVar13 = (*(code *)PTR_<&str>_000c3b30)(0xc0000000,0x1b);
    param_1 = extraout_XMM0_Da;
  }
  else {
    if ((uVar3 & 0xc0000000) == 0) {
      param_2[4] = param_4[4];
      lVar13 = *param_4;
      lVar6 = param_4[1];
      lVar11 = param_4[3];
      param_2[2] = param_4[2];
      param_2[3] = lVar11;
      *param_2 = lVar13;
      param_2[1] = lVar6;
      return param_2;
    }
    uVar14 = param_3[2];
    if (uVar14 != 0) {
      plVar4 = (longlong *)param_3[1];
      lVar13 = uVar14 * 0x28;
      plVar16 = plVar4;
      do {
        if (((*(short *)((longlong)plVar16 + 0x24) == *(short *)((longlong)param_4 + 0x24)) &&
            ((int)plVar16[3] == *(int *)((longlong)param_4 + 0x1c))) &&
           (*(int *)((longlong)plVar16 + 0x1c) == (int)param_4[4])) {
          if ((uVar3 & 0x40000000) == 0) {
            local_58 = plVar16[4];
            local_78 = *plVar16;
            uStack_70 = plVar16[1];
            local_68 = plVar16[2];
            lStack_60 = plVar16[3];
            uVar14 = uVar14 - 1;
            lVar13 = plVar4[uVar14 * 5 + 4];
            plVar1 = plVar4 + uVar14 * 5;
            uVar17 = (undefined4)*plVar1;
            uVar7 = *(undefined4 *)((longlong)plVar1 + 4);
            lVar6 = plVar1[1];
            uVar8 = *(undefined4 *)((longlong)plVar1 + 0xc);
            plVar4 = plVar4 + uVar14 * 5 + 2;
            lVar11 = *plVar4;
            uVar9 = *(undefined4 *)((longlong)plVar4 + 4);
            lVar12 = plVar4[1];
            uVar10 = *(undefined4 *)((longlong)plVar4 + 0xc);
            *(undefined4 *)plVar16 = uVar17;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar7;
            *(int *)(plVar16 + 1) = (int)lVar6;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar8;
            *(int *)(plVar16 + 2) = (int)lVar11;
            *(undefined4 *)((longlong)plVar16 + 0x14) = uVar9;
            *(int *)(plVar16 + 3) = (int)lVar12;
            *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar10;
            plVar16[4] = lVar13;
            param_3[2] = uVar14;
            uVar5 = param_4[2];
            uVar15 = uVar5 + local_68;
            if (param_3[3] < uVar15) {
              lVar13 = (*(code *)PTR_<&str>_000c3b30)(uVar14,0x25);
              param_2[1] = lVar13;
              *param_2 = -2;
              param_1 = extraout_XMM0_Da_00;
              if (local_78 != 0) {
                param_1 = (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da_00,1);
              }
              goto LAB_0005fa87;
            }
            if (local_78 - local_68 < uVar5) {
              uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (&local_78,local_68,uVar5,1,1);
              uVar15 = uVar5 + local_68;
LAB_0005fd73:
              (*(code *)PTR_memcpy_000c3aa8)(uVar17,uVar5);
            }
            else if (uVar5 != 0) goto LAB_0005fd73;
            param_2[2] = uVar15;
            *(undefined4 *)param_2 = (undefined4)local_78;
            *(undefined4 *)((longlong)param_2 + 4) = local_78._4_4_;
            *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
            *(undefined4 *)(param_2 + 3) = (undefined4)local_58;
            *(longlong *)((longlong)param_2 + 0x1c) = lStack_60;
            *(undefined2 *)((longlong)param_2 + 0x24) = local_58._4_2_;
            lVar13 = *param_4;
            local_68 = uVar15;
            param_1 = (undefined4)local_78;
            goto joined_r0x0005fdb1;
          }
          lVar13 = plVar16[2];
          uVar5 = param_4[2];
          uVar15 = uVar5 + lVar13;
          if (param_3[3] < uVar15) {
            lVar13 = *plVar16;
            uVar14 = uVar14 - 1;
            lVar6 = plVar4[uVar14 * 5 + 4];
            plVar1 = plVar4 + uVar14 * 5;
            uVar17 = (undefined4)*plVar1;
            uVar7 = *(undefined4 *)((longlong)plVar1 + 4);
            lVar11 = plVar1[1];
            uVar8 = *(undefined4 *)((longlong)plVar1 + 0xc);
            plVar4 = plVar4 + uVar14 * 5 + 2;
            uVar9 = *(undefined4 *)((longlong)plVar4 + 4);
            lVar12 = plVar4[1];
            uVar10 = *(undefined4 *)((longlong)plVar4 + 0xc);
            *(int *)(plVar16 + 2) = (int)*plVar4;
            *(undefined4 *)((longlong)plVar16 + 0x14) = uVar9;
            *(int *)(plVar16 + 3) = (int)lVar12;
            *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar10;
            plVar16[4] = lVar6;
            *(undefined4 *)plVar16 = uVar17;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar7;
            *(int *)(plVar16 + 1) = (int)lVar11;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar8;
            param_3[2] = uVar14;
            if (lVar13 != 0) {
              uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar14,1);
            }
            lVar13 = (*(code *)PTR_<&str>_000c3b30)(uVar17,0x25);
            param_1 = extraout_XMM0_Da_04;
            goto LAB_0005fa7c;
          }
          if ((ulonglong)(*plVar16 - lVar13) < uVar5) {
            param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                      do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                (plVar16,lVar13,uVar5,1,1);
LAB_0005fdd8:
            param_1 = (*(code *)PTR_memcpy_000c3aa8)(param_1,uVar5);
            uVar15 = uVar5 + plVar16[2];
          }
          else if (uVar5 != 0) goto LAB_0005fdd8;
          plVar16[2] = uVar15;
          *param_2 = -1;
          goto LAB_0005fa87;
        }
        plVar16 = plVar16 + 5;
        lVar13 = lVar13 + -0x28;
      } while (lVar13 != 0);
    }
    uVar14 = param_4[2];
    uVar15 = param_3[3];
    if ((uVar3 & 0x40000000) == 0) {
      if (uVar14 <= uVar15) {
        uVar2 = *(undefined2 *)((longlong)param_4 + 0x24);
        param_2[2] = param_4[2];
        lVar13 = param_4[1];
        *param_2 = *param_4;
        param_2[1] = lVar13;
        *(uint *)(param_2 + 3) = uVar3 & 0x3fffffff;
        *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)((longlong)param_4 + 0x1c);
        *(undefined2 *)((longlong)param_2 + 0x24) = uVar2;
        return param_2;
      }
      lVar13 = (*(code *)PTR_<&str>_000c3b30)(uVar15,0x25);
      param_1 = extraout_XMM0_Da_01;
    }
    else if (uVar15 < uVar14) {
      lVar13 = (*(code *)PTR_<&str>_000c3b30)(uVar15,0x25);
      param_1 = extraout_XMM0_Da_02;
    }
    else {
      uVar17 = <alloc[12e961f32105355]::vec::Vec<agy_bridge[64a9e9deac6c45ce]::shm::InFlightChunk>>
               ::retain::<<agy_bridge[64a9e9deac6c45ce]::shm::ChunkReassembler>::feed::_closure_2_>
                         (param_3,(longlong)param_4 + 0x24,(longlong)param_4 + 0x1c);
      uVar15 = param_3[2];
      if (uVar15 < 0x10) {
        uVar2 = *(undefined2 *)((longlong)param_4 + 0x24);
        local_48 = *(undefined8 *)((longlong)param_4 + 0x1c);
        uStack_40 = 0;
        lVar13 = *param_4;
        lVar6 = param_4[1];
        if (uVar15 == *param_3) {
          <alloc[12e961f32105355]::raw_vec::RawVec<agy_bridge[64a9e9deac6c45ce]::shm::InFlightChunk>>
          ::grow_one();
        }
        uVar5 = param_3[1];
        *(longlong *)(uVar5 + uVar15 * 0x28) = lVar13;
        *(longlong *)(uVar5 + 8 + uVar15 * 0x28) = lVar6;
        *(ulonglong *)(uVar5 + 0x10 + uVar15 * 0x28) = uVar14;
        *(undefined8 *)(uVar5 + 0x18 + uVar15 * 0x28) = local_48;
        *(uint *)(uVar5 + 0x20 + uVar15 * 0x28) = uVar3 & 0x3fffffff;
        *(undefined2 *)(uVar5 + 0x24 + uVar15 * 0x28) = uVar2;
        param_3[2] = uVar15 + 1;
        *param_2 = -1;
        return param_2;
      }
      lVar13 = (*(code *)PTR_<&str>_000c3b30)(uVar17,0x27);
      param_1 = extraout_XMM0_Da_03;
    }
  }
LAB_0005fa7c:
  param_2[1] = lVar13;
  *param_2 = -2;
LAB_0005fa87:
  lVar13 = *param_4;
joined_r0x0005fdb1:
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_1,1);
  }
  return param_2;
}


