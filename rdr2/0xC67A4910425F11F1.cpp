// act_caunc_rustling_invite.ysc @ L6872
void func_224(int* iParam0)
{
  if (MISC::IS_BIT_SET(iParam0->f_21, 5))
  {
    PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
    MISC::CLEAR_BIT(&(iParam0->f_21), 5);
  }
  func_446();
}