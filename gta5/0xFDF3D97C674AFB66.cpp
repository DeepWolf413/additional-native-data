// am_mp_arcade.ysc @ L26935
void func_294(int iParam0)
{
  char* sVar0;
  
  if (MISC::IS_BIT_SET(Local_807, 9))
  {
    GRAPHICS::POP_TIMECYCLE_MODIFIER();
  }
  sVar0 = func_295(iParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    GRAPHICS::SET_TIMECYCLE_MODIFIER(func_295(iParam0));
  }
  if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
  {
    GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
  }
  MISC::SET_BIT(&Local_807, 9);
}