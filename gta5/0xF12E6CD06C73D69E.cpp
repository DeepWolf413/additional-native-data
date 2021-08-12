// freemode.ysc @ L1135377
void func_19484()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (!func_120(&Global_1395562))
  {
    func_119(&Global_1395562, 0, 0);
    Global_1658175 = Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_508;
    iVar0 = MISC::GET_FRAME_COUNT();
    if (func_3093())
    {
      iVar0 = (iVar0 * -1);
    }
    iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(false, 65534) + MISC::GET_RANDOM_INT_IN_RANGE(false, 65534));
    iVar2 = ((MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())) + MISC::GET_HASH_KEY(NETWORK::_GET_CLOUD_TIME_AS_STRING())) + iVar1);
    iVar2 = (iVar2 * iVar0);
    Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_508 = iVar2;
    if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
    {
      Global_1658176.f_10 = Global_1658176.f_9;
      Global_1658176.f_9 = iVar2;
    }
    Global_1395562.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(24000, 31000);
  }
  else if (func_118(&Global_1395562, Global_1395562.f_2, 0))
  {
    func_19544(&Global_1395562);
  }
}