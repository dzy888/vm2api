// 00769d36 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
    */

uint * __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
<alloc[12e961f32105355]::alloc::Global>(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  uint uVar13;
  char *pcVar14;
  longlong lVar15;
  
  puVar6 = (uint *)(*(code *)PTR_grow_amortized_0079b1d0)();
  if (puVar6 == (uint *)0xffffffffffffffff) {
    return (uint *)0xffffffffffffffff;
  }
  plVar11 = param_3;
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar8 = (char *)param_3[3];
  if (pcVar8 != (char *)0x0) {
    lVar3 = param_3[2];
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x1) {
      pcVar9 = pcVar10;
      pcVar14 = pcVar8;
      do {
        pcVar10 = pcVar9 + ((ulonglong)pcVar14 >> 1);
        if (plVar11 < *(longlong **)
                       (lVar3 + 0x10 + (longlong)(pcVar9 + ((ulonglong)pcVar14 >> 1)) * 0x20)) {
          pcVar10 = pcVar9;
        }
        pcVar14 = pcVar14 + -((ulonglong)pcVar14 >> 1);
        pcVar9 = pcVar10;
      } while ((char *)0x1 < pcVar14);
    }
    lVar15 = (longlong)pcVar10 * 0x20;
    if ((*(longlong **)(lVar3 + 0x10 + lVar15) <= plVar11) &&
       (plVar11 < *(longlong **)(lVar3 + 0x18 + lVar15))) {
      if (pcVar10 < pcVar8) {
        pcVar8 = (char *)((longlong *)(lVar3 + lVar15))[1];
        if (pcVar8 == (char *)0x0) goto LAB_00769e39;
        lVar3 = *(longlong *)(lVar3 + lVar15);
        pcVar10 = (char *)0x0;
        if (pcVar8 != (char *)0x1) {
          pcVar9 = pcVar10;
          pcVar14 = pcVar8;
          do {
            pcVar10 = pcVar9 + ((ulonglong)pcVar14 >> 1);
            if (plVar11 < *(longlong **)
                           (lVar3 + (longlong)(pcVar9 + ((ulonglong)pcVar14 >> 1)) * 0x18)) {
              pcVar10 = pcVar9;
            }
            pcVar14 = pcVar14 + -((ulonglong)pcVar14 >> 1);
            pcVar9 = pcVar10;
          } while ((char *)0x1 < pcVar14);
        }
        plVar4 = *(longlong **)(lVar3 + (longlong)pcVar10 * 0x18);
        if (plVar4 != plVar11) {
          if (pcVar10 + (plVar4 < plVar11) == (char *)0x0) goto LAB_00769e39;
          pcVar10 = pcVar10 + (plVar4 < plVar11) + -1;
        }
        if (pcVar10 < pcVar8) {
          lVar3 = lVar3 + (longlong)pcVar10 * 0x18;
          uVar5 = *(ulonglong *)(lVar3 + 8);
          if (uVar5 < (ulonglong)param_3[1]) {
            uVar7 = *(undefined8 *)(*param_3 + 8 + uVar5 * 0x18);
            pcVar10 = *(char **)(*param_3 + 0x10 + uVar5 * 0x18);
          }
          else {
            uVar7 = 0;
          }
          uVar1 = *(uint *)(lVar3 + 0x10);
          uVar2 = *(uint *)(lVar3 + 0x14);
          uVar13 = (uint)(uVar1 != 0);
          *puVar6 = uVar13;
          puVar6[1] = uVar1;
          puVar6[2] = uVar13;
          puVar6[3] = uVar2;
          *(undefined8 *)(puVar6 + 4) = uVar7;
          *(char **)(puVar6 + 6) = pcVar10;
          return puVar6;
        }
        ppuVar12 = &PTR_s__rust_deps_addr2line_0_25_1_src__007975f8;
      }
      else {
        ppuVar12 = &PTR_s__rust_deps_addr2line_0_25_1_src__007975e0;
      }
      (*(code *)PTR_panic_bounds_check_00799520)(pcVar10,ppuVar12);
      if (pcVar8 == (char *)0x0) {
        return (uint *)0x0;
      }
      puVar6 = (uint *)0x1;
      if (*pcVar10 != '\\') {
        if (pcVar8 < (char *)0x3) {
          return (uint *)0x0;
        }
        if (pcVar10[1] < -0x40) {
          return (uint *)0x0;
        }
        if ((pcVar8 != (char *)0x3) && (pcVar10[3] < -0x40)) {
          return (uint *)0x0;
        }
        puVar6 = (uint *)(ulonglong)(*(short *)(pcVar10 + 1) == 0x5c3a);
      }
      return puVar6;
    }
  }
LAB_00769e39:
  *puVar6 = 2;
  return puVar6;
}


