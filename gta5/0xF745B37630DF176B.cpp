// launcher_basejumpheli.ysc @ L6645
void func_169()
{
  func_166(&uLocal_94, 4);
  func_170();
  if (SCRIPT::IS_THREAD_ACTIVE(iLocal_52))
  {
    PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
  }
  if (!MISC::IS_STRING_NULL(&Local_69))
  {
    if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_69) != 0)
    {
      SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_69);
    }
  }
}