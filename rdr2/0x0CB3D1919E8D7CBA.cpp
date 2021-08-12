// odriscolls1.ysc @ L82663
int func_1905(int iParam0, var uParam1, char* sParam2, int iParam3)
{
  if (func_2334(iParam0, uParam1, iParam3))
  {
    if (AUDIO::_0xD89504D9D7D5057D(sParam2))
    {
      if (AUDIO::_0x0CB3D1919E8D7CBA(sParam2) == 3)
      {
        AUDIO::RESTART_SCRIPTED_CONVERSATION(sParam2);
      }
    }
    if (!func_1342(sParam2))
    {
      return 1;
    }
  }
  else if (func_1342(sParam2))
  {
    if (AUDIO::_0x0CB3D1919E8D7CBA(sParam2) != 3)
    {
      AUDIO::PAUSE_SCRIPTED_CONVERSATION(sParam2, true, false, false, false);
    }
  }
  return 0;
}