// 005d9f40 open_sqlite_readonly

/* WARNING: Removing unreachable block (ram,0x005da003) */
/* WARNING: Removing unreachable block (ram,0x005da033) */
/* WARNING: Removing unreachable block (ram,0x005da051) */
/* WARNING: Removing unreachable block (ram,0x005da062) */
/* craggemini_core[66f3c71560d70857]::acp_backend::open_sqlite_readonly */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::open_sqlite_readonly(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong unaff_R15;
  longlong local_58;
  undefined1 *local_50;
  longlong local_48;
  int local_38;
  
  cVar2 = (*(code *)PTR_is_file_00799348)();
  if (cVar2 != '\0') {
    if (DAT_0079c478 != 0) {
      <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>
      ::initialize::
      <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>::get_or_init<craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api>::_closure_0_,_>
                (&SQLITE3_API);
    }
    if ((SQLITE3_API != (code *)0x0) && ((*(code *)PTR_from_utf8_00799468)(), local_38 != 1)) {
      (*(code *)PTR_spec_new_impl_00799f08)();
      if (local_58 == -1) {
        (*SQLITE3_API)(0,1);
        *local_50 = 0;
        local_58 = local_48;
      }
      if (local_58 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_R15;
  return auVar1 << 0x40;
}


