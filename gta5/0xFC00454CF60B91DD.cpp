// am_mp_business_hub.ysc @ L285663
void func_4670(char* sParam0)
{
  int iVar0;
  int iVar1;
  
  AUDIO::FREEZE_RADIO_STATION(sParam0);
  iVar0 = 0;
  if (!Global_1372339)
  {
    iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
    iVar0 = iVar1 * 60 * 1000;
  }
  if (func_3150() != func_10())
  {
    if (!Global_1372339 && func_4674(func_3150()))
    {
      iVar0 = func_4673(func_3150());
    }
    else if (func_3150() == PLAYER::PLAYER_ID())
    {
      func_4672(iVar0);
    }
  }
  AUDIO::_SET_RADIO_TRACK_MIX(sParam0, func_4671(MISC::GET_HASH_KEY(sParam0), 1), iVar0);
  AUDIO::UNFREEZE_RADIO_STATION(sParam0);
}