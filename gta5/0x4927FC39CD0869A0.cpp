// fm_mission_controller.ysc @ L362481
void func_5187(int iParam0, int iParam1, bool bParam2)
{
  var uVar0;
  
  if (func_197(bParam2, 1, 1))
  {
    if (MISC::IS_PC_VERSION())
    {
      func_5136(iParam0, iParam1, PLAYER::GET_PLAYER_NAME(bParam2));
    }
    else
    {
      func_5136(iParam0, iParam1, NETWORK::NETWORK_PLAYER_GET_USERID(bParam2, &uVar0));
    }
  }
}