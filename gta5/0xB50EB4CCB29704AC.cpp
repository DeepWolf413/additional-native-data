// animal_controller.ysc @ L103365
int func_585()
{
  int iVar0;
  
  if (!iLocal_1671 && func_588())
  {
    iLocal_1671 = 1;
    PED::CLEAR_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
  }
  else if ((!iLocal_1671 && !iLocal_1670) && func_587(PLAYER::PLAYER_PED_ID()))
  {
    iLocal_1670 = 1;
    func_418(PLAYER::PLAYER_PED_ID(), &uLocal_1605, 1, -1);
    iVar0 = 411999;
    func_586(PLAYER::PLAYER_PED_ID(), &iVar0);
  }
  else if ((!iLocal_1670 && !iLocal_1671) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  return 0;
}