// 004d1ae0 legacy_file_shm_enabled

/* craggemini_core[66f3c71560d70857]::pool::legacy_file_shm_enabled */

bool __rustcall craggemini_core[66f3c71560d70857]::pool::legacy_file_shm_enabled(void)

{
  undefined8 in_RCX;
  bool bVar1;
  char local_28;
  longlong local_20;
  byte *local_18;
  longlong local_10;
  
  (*(code *)PTR_inner_00799be8)(in_RCX,0x1a);
  if (local_28 != '\0') {
    if ((local_20 != -1) && (local_20 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    return false;
  }
  if (local_10 == 4) {
    if ((((byte)(((byte)(*local_18 + 0xbf) < 0x1a) << 5 | *local_18) != 0x74) ||
        ((byte)(((byte)(local_18[1] + 0xbf) < 0x1a) << 5 | local_18[1]) != 0x72)) ||
       ((byte)(((byte)(local_18[2] + 0xbf) < 0x1a) << 5 | local_18[2]) != 0x75)) goto LAB_004d1bb6;
    bVar1 = (byte)(((byte)(local_18[3] + 0xbf) < 0x1a) << 5 | local_18[3]) == 0x65;
  }
  else {
    if (local_10 == 1) {
      bVar1 = *local_18 == 0x31;
      if (local_20 == 0) {
        return bVar1;
      }
      goto LAB_004d1bc1;
    }
LAB_004d1bb6:
    bVar1 = false;
  }
  if (local_20 == 0) {
    return bVar1;
  }
LAB_004d1bc1:
  (*(code *)PTR___rust_dealloc_00798fc8)();
  return bVar1;
}


