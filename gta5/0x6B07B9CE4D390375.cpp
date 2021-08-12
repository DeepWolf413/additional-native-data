// maintransition.ysc @ L332391
int func_4176(var uParam0)
{
  if (func_4299() || func_1850() == 1)
  {
    NETWORK::_NETWORK_BLOCK_KICKED_PLAYERS(false);
    func_4332(3);
    func_4340(4);
  }
  else
  {
    if (func_29(202))
    {
      MISC::SET_BIT(&(uParam0->f_1653), false);
    }
    if (MISC::IS_BIT_SET(uParam0->f_1653, false))
    {
      if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
      {
        MISC::CLEAR_BIT(&(uParam0->f_1653), false);
        NETWORK::_NETWORK_BLOCK_KICKED_PLAYERS(false);
        func_34(63, func_4397(), 32);
      }
    }
  }
  return 0;
}