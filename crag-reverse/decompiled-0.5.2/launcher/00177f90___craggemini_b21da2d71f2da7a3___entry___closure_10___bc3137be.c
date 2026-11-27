// 00177f90 <craggemini[b21da2d71f2da7a3]::entry::{closure#10}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<std[6c98fd8553dbae28]::ffi::os_str::OsString> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::any::<craggemini[b21da2d71f2da7a3]::entry::{closure#10}>
    */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<std[6c98fd8553dbae28]::ffi::os_str::OsString>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::any::<craggemini[b21da2d71f2da7a3]::entry::_closure_10_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 == lVar2) {
    return 0;
  }
  do {
    lVar4 = lVar1 + 0x18;
    if (*(longlong *)(lVar1 + 0x10) == 0x10) {
      pcVar3 = *(char **)(lVar1 + 8);
      auVar5[0] = -(*pcVar3 == DAT_00113e60);
      auVar5[1] = -(pcVar3[1] == UNK_00113e61);
      auVar5[2] = -(pcVar3[2] == UNK_00113e62);
      auVar5[3] = -(pcVar3[3] == UNK_00113e63);
      auVar5[4] = -(pcVar3[4] == UNK_00113e64);
      auVar5[5] = -(pcVar3[5] == UNK_00113e65);
      auVar5[6] = -(pcVar3[6] == UNK_00113e66);
      auVar5[7] = -(pcVar3[7] == UNK_00113e67);
      auVar5[8] = -(pcVar3[8] == UNK_00113e68);
      auVar5[9] = -(pcVar3[9] == UNK_00113e69);
      auVar5[10] = -(pcVar3[10] == UNK_00113e6a);
      auVar5[0xb] = -(pcVar3[0xb] == UNK_00113e6b);
      auVar5[0xc] = -(pcVar3[0xc] == UNK_00113e6c);
      auVar5[0xd] = -(pcVar3[0xd] == UNK_00113e6d);
      auVar5[0xe] = -(pcVar3[0xe] == UNK_00113e6e);
      auVar5[0xf] = -(pcVar3[0xf] == UNK_00113e6f);
      if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        *param_1 = lVar4;
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
    lVar1 = lVar4;
  } while (lVar4 != lVar2);
  *param_1 = lVar4;
  return 0;
}


