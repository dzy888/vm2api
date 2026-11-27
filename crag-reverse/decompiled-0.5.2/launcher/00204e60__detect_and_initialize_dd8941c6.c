// 00204e60 detect_and_initialize

/* WARNING: Removing unreachable block (ram,0x00205438) */
/* WARNING: Removing unreachable block (ram,0x00205279) */
/* WARNING: Removing unreachable block (ram,0x002051d3) */
/* WARNING: Removing unreachable block (ram,0x002050c5) */
/* WARNING: Removing unreachable block (ram,0x00204f3a) */
/* WARNING: Removing unreachable block (ram,0x00204f23) */
/* WARNING: Removing unreachable block (ram,0x00204ed1) */
/* WARNING: Removing unreachable block (ram,0x00204eba) */
/* WARNING: Removing unreachable block (ram,0x00204e99) */
/* WARNING: Removing unreachable block (ram,0x00204e78) */
/* std_detect[69edc48e87c611e]::detect::cache::detect_and_initialize */

ulonglong __rustcall std_detect[69edc48e87c611e]::detect::cache::detect_and_initialize(void)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong local_58;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar14 = *puVar1;
  lVar8 = *(longlong *)(puVar1 + 1);
  uVar6 = puVar1[3];
  uVar12 = 0;
  if (uVar14 == 0) {
    uVar21 = 0;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar10 = *(uint *)(lVar2 + 8);
    uVar7 = *(uint *)(lVar2 + 0xc);
    if (uVar14 < 7) {
      local_58 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar17 = 0;
    }
    else {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar5 = *(uint *)(lVar2 + 8);
      puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = *puVar1;
      uVar17 = puVar1[2];
      uVar12 = (ulonglong)*(uint *)(lVar2 + 4);
      local_58 = (ulonglong)*(uint *)(lVar2 + 0xc);
    }
    uVar11 = 0;
    piVar3 = (int *)cpuid(0x80000000);
    if (*piVar3 != 0) {
      lVar2 = cpuid(0x80000001);
      uVar11 = (ulonglong)*(uint *)(lVar2 + 0xc);
    }
    uVar19 = (uint)uVar12;
    uVar13 = (uVar19 & 0x800) >> 3 |
             (uVar19 & 0x80000) >> 0xc | (uVar7 & 0x400000) >> 0xd | uVar7 >> 10 & 8;
    uVar20 = local_58 << 0x16;
    uVar15 = (ulonglong)(uVar10 >> 0x12 & 0x20);
    uVar18 = ((ulonglong)uVar7 << 0x26 | (ulonglong)uVar10) & 0x2000000000000010 |
             (ulonglong)(uVar7 >> 0x19 & 1) | (ulonglong)(uVar7 & 0x20000000) << 0x1a |
             (ulonglong)(uVar7 >> 0x1c & 4) | uVar15;
    uVar22 = (ulonglong)(uVar13 + (uVar19 & 0x200) * 4 | (uint)(uVar12 >> 0x13) & 0x10);
    uVar21 = uVar22 | 0x400;
    if ((uVar4 & 0x80000000) == 0) {
      uVar21 = uVar22;
    }
    if ((local_58 & 0x800000) != 0) {
      lVar2 = cpuid(0x19);
      uVar13 = *(uint *)(lVar2 + 8);
      uVar15 = (ulonglong)((*(uint *)(lVar2 + 4) & 4) << 4 | (*(uint *)(lVar2 + 4) & 1) << 5);
      uVar21 = uVar21 | uVar15;
    }
    uVar16 = (uint)uVar11;
    uVar22 = (ulonglong)
             (uVar10 >> 0x13 & 0xc0 |
              uVar7 >> 9 & 0x800 | uVar7 >> 9 & 0x400 | uVar7 & 0x202 | (uVar7 & 1) << 8 |
              (uint)(uVar12 >> 0xf) & 8 | (uint)(uVar12 >> 0x10) & 0x2000) |
             (ulonglong)(uVar19 & 8) << 0x36 | uVar18 | (ulonglong)(uVar10 & 0x1000000) << 0x26 |
             (ulonglong)(uVar19 & 0x100) << 0x32 | (ulonglong)((uint)uVar20 & 0x40000000) |
             (ulonglong)((uint)uVar20 & 0x80000000) | uVar20 & 0x100000000 |
             (ulonglong)(uVar16 & 0x20) << 0x36;
    if ((uVar6 == 0x444d4163 && lVar8 == 0x69746e6568747541) ||
       (uVar6 == 0x656e6975 && lVar8 == 0x6e65476e6f677948)) {
      uVar11 = (ulonglong)((uVar16 & 0x800) * 2);
      uVar21 = uVar21 | uVar11;
      uVar22 = uVar22 | (ulonglong)(uVar16 & 0x200000) << 0x27 | (ulonglong)((uVar16 & 0x40) << 6);
    }
    if ((~uVar7 & 0xc000000) == 0) {
      uVar10 = core[c0acaeba6ab4c2e0]::core_arch::x86::xsave::_xgetbv(uVar11,uVar15,uVar13);
      if (((~uVar10 & 0x60000) == 0) &&
         (uVar22 = uVar22 | (ulonglong)(uVar17 & 0x100) << 0x27 |
                            (ulonglong)(uVar4 & 0x200000) << 0x19 |
                            (ulonglong)(uVar5 & 0x400000) << 0x17 |
                            (ulonglong)(uVar5 & 0x3000000) << 0x13, 0x1d < uVar14)) {
        puVar1 = (uint *)cpuid(0x1e);
        uVar13 = *puVar1;
        uVar22 = uVar22 | (ulonglong)(uVar13 & 0x100) << 0x2a |
                          (ulonglong)(uVar13 & 0x80) << 0x29 | (ulonglong)(uVar13 & 0x50) << 0x2d;
      }
      uVar11 = uVar22 | 0x10000000000000;
      if ((uVar17 & 0x200000) == 0 || (uVar10 & 0x80000) == 0) {
        uVar11 = uVar22;
      }
      uVar22 = uVar11;
      if ((uVar10 & 6) == 6) {
        if (0xc < uVar14) {
          puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
          uVar14 = *puVar1;
          uVar11 = uVar21 | 1;
          if ((uVar14 & 1) == 0) {
            uVar11 = uVar21;
          }
          uVar21 = ((uVar14 & 8) >> 2 | (uVar14 & 2) * 2) | uVar11;
        }
        uVar11 = (ulonglong)(uVar4 & 0x800000) << 0xf |
                 (ulonglong)(uVar4 & 0x10) << 0x24 |
                 (ulonglong)((uVar19 & 0x20) << 10) |
                 (ulonglong)(uVar7 >> 0xe & 0x4000) | (ulonglong)(uVar7 & 0x1000) << 0x2c |
                 uVar22 | 0x8000000000000000;
        uVar22 = uVar11 | 0x40000000000;
        if ((uVar17 & 0x10) == 0) {
          uVar22 = uVar11;
        }
        uVar22 = (ulonglong)((uVar4 & 7) << 0x10) | (ulonglong)(uVar17 & 0x20) << 0x22 |
                 (ulonglong)(uVar17 & 0x400) << 0x1f | uVar22;
        if ((~uVar7 & 0x20001000) == 0 && (uVar10 & 0xe0) == 0xe0) {
          uVar22 = uVar22 | ((uint)(uVar12 >> 7) & 0x800000 |
                            (uint)(uVar12 >> 8) & 0x100000 |
                            (uint)(uVar12 >> 6) & 0x200000 |
                            (uint)(uVar12 >> 4) & 0x400000 |
                            (uVar19 & 0x200000) << 5 |
                            (uVar19 & 0x20000) * 0x80 + (uVar19 & 0x10000) * 8);
          uVar11 = uVar22 | 0x2000000;
          if (uVar12 < 0x80000000) {
            uVar11 = uVar22;
          }
          uVar14 = (uint)local_58;
          uVar22 = uVar20 & 0x600000000 |
                   (ulonglong)((uVar14 & 0x40) << 0x17 | (uVar14 & 2) << 0x1a) |
                   (ulonglong)((uVar14 & 0x4000) << 0xe) | (ulonglong)(uVar5 & 0x100) << 0x1c |
                   (ulonglong)(uVar5 & 0x800000) << 0xe | (ulonglong)(uVar4 & 0x20) << 0x1e | uVar11
          ;
          if ((uVar17 & 0x80000) != 0) {
            lVar2 = cpuid(0x24);
            uVar12 = 0x60000000000000;
            if (((~uVar4 & 0x800010) != 0 || (uVar17 & 0x10) == 0) ||
                (*(uint *)(lVar2 + 4) & 0xfe) == 0) {
              uVar12 = 0x20000000000000;
            }
            uVar22 = uVar22 | uVar12;
          }
        }
      }
    }
    uVar12 = uVar22 & 0xf9ffffffffffbfff;
    if ((uVar22 & 0x4000) != 0 || (uVar6 != 0x6c65746e || lVar8 != 0x49656e69756e6547)) {
      uVar12 = uVar22;
    }
  }
  puVar9 = PTR_CACHE_0021a4c0;
  *(ulonglong *)PTR_CACHE_0021a4c0 = uVar12 | 0x8000000000000000;
  *(ulonglong *)(puVar9 + 8) = uVar21 << 1 | uVar12 >> 0x3f | 0x8000000000000000;
  *(undefined8 *)(puVar9 + 0x10) = 0x8000000000000000;
  return uVar12;
}


