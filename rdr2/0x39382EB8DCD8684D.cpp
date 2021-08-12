// abigail2_1.ysc @ L76861
void func_2203()
{
  int iVar0;

  SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
  iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
  while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
  {
    if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == joaat("DOC_PLAYER_JOURNAL"))
    {
      if (!ENTITY::IS_ENTITY_DEAD(Global_35))
      {
        PED::SET_PED_RESET_FLAG(Global_35, 265, true);
      }
      PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
      return;
    }
    iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
  }
}