// init_global_block_mc.ysc @ L1
void __EntryFunction__()
{
  StringCopy(&Global_524294, "", 32);
  if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(2))
  {
    SCRIPTS::_RESTORE_GLOBAL_BLOCK(2);
  }
  else
  {
    SCRIPTS::_STORE_GLOBAL_BLOCK(2);
  }
  SCRIPTS::TERMINATE_THIS_THREAD();
}