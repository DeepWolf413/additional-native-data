// abigail2_1_intro.ysc @ L1618
void func_68()
{
  int iVar0;

  if (func_166(Global_1898437) && func_167(Global_1898437) == 1)
  {
    iVar0 = func_168(Global_1898437);
    if ((func_81(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
    {
      PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[iVar0 /*74*/].f_22), 1);
    }
  }
}