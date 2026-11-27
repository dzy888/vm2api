// 001fdd24 find_location

/* <addr2line[f7adfda4b3430143]::line::Lines>::find_location */

uint * __rustcall
<addr2line[f7adfda4b3430143]::line::Lines>::find_location
          (uint *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined **ppuVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  
  pcVar6 = (char *)param_2[3];
  if (pcVar6 != (char *)0x0) {
    lVar3 = param_2[2];
    pcVar9 = (char *)0x0;
    if (pcVar6 != (char *)0x1) {
      pcVar8 = pcVar9;
      pcVar12 = pcVar6;
      do {
        pcVar9 = pcVar8 + ((ulonglong)pcVar12 >> 1);
        if (param_3 < *(ulonglong *)
                       (lVar3 + 0x10 + (longlong)(pcVar8 + ((ulonglong)pcVar12 >> 1)) * 0x20)) {
          pcVar9 = pcVar8;
        }
        pcVar12 = pcVar12 + -((ulonglong)pcVar12 >> 1);
        pcVar8 = pcVar9;
      } while ((char *)0x1 < pcVar12);
    }
    lVar13 = (longlong)pcVar9 * 0x20;
    if ((*(ulonglong *)(lVar3 + 0x10 + lVar13) <= param_3) &&
       (param_3 < *(ulonglong *)(lVar3 + 0x18 + lVar13))) {
      if (pcVar9 < pcVar6) {
        pcVar6 = (char *)((longlong *)(lVar3 + lVar13))[1];
        if (pcVar6 == (char *)0x0) goto LAB_001fde09;
        lVar3 = *(longlong *)(lVar3 + lVar13);
        pcVar9 = (char *)0x0;
        if (pcVar6 != (char *)0x1) {
          pcVar8 = pcVar9;
          pcVar12 = pcVar6;
          do {
            pcVar9 = pcVar8 + ((ulonglong)pcVar12 >> 1);
            if (param_3 < *(ulonglong *)
                           (lVar3 + (longlong)(pcVar8 + ((ulonglong)pcVar12 >> 1)) * 0x18)) {
              pcVar9 = pcVar8;
            }
            pcVar12 = pcVar12 + -((ulonglong)pcVar12 >> 1);
            pcVar8 = pcVar9;
          } while ((char *)0x1 < pcVar12);
        }
        uVar4 = *(ulonglong *)(lVar3 + (longlong)pcVar9 * 0x18);
        if (uVar4 != param_3) {
          if (pcVar9 + (uVar4 < param_3) == (char *)0x0) goto LAB_001fde09;
          pcVar9 = pcVar9 + (uVar4 < param_3) + -1;
        }
        if (pcVar9 < pcVar6) {
          lVar3 = lVar3 + (longlong)pcVar9 * 0x18;
          uVar4 = *(ulonglong *)(lVar3 + 8);
          if (uVar4 < (ulonglong)param_2[1]) {
            uVar5 = *(undefined8 *)(*param_2 + 8 + uVar4 * 0x18);
            pcVar9 = *(char **)(*param_2 + 0x10 + uVar4 * 0x18);
          }
          else {
            uVar5 = 0;
          }
          uVar1 = *(uint *)(lVar3 + 0x10);
          uVar2 = *(uint *)(lVar3 + 0x14);
          uVar11 = (uint)(uVar1 != 0);
          *param_1 = uVar11;
          param_1[1] = uVar1;
          param_1[2] = uVar11;
          param_1[3] = uVar2;
          *(undefined8 *)(param_1 + 4) = uVar5;
          *(char **)(param_1 + 6) = pcVar9;
          return param_1;
        }
        ppuVar10 = &PTR_s__rust_deps_addr2line_0_25_1_src__00218408;
      }
      else {
        ppuVar10 = &PTR_s__rust_deps_addr2line_0_25_1_src__002183f0;
      }
      (*(code *)PTR_panic_bounds_check_0021a020)(pcVar9,ppuVar10);
      if (pcVar6 == (char *)0x0) {
        return (uint *)0x0;
      }
      puVar7 = (uint *)0x1;
      if (*pcVar9 != '\\') {
        if (pcVar6 < (char *)0x3) {
          return (uint *)0x0;
        }
        if (pcVar9[1] < -0x40) {
          return (uint *)0x0;
        }
        if ((pcVar6 != (char *)0x3) && (pcVar9[3] < -0x40)) {
          return (uint *)0x0;
        }
        puVar7 = (uint *)(ulonglong)(*(short *)(pcVar9 + 1) == 0x5c3a);
      }
      return puVar7;
    }
  }
LAB_001fde09:
  *param_1 = 2;
  return param_1;
}


