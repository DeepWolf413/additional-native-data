// act_cajav_homerob1.ysc @ L10956
void func_284(int iParam0, int iParam1)
{
  int iVar0;

  if (iParam0 == 0)
  {
    return;
  }
  if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
  {
    return;
  }
  if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iParam0) != 0)
  {
    SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
    iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
    while (iVar0 != 0)
    {
      if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
      {
        if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
        {
          PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
        }
      }
      iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
    }
  }
}