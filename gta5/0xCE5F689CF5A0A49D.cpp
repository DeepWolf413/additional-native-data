// am_mp_property_int.ysc @ L333216
void func_4007()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_3959(Global_2453903.f_1.f_2828.f_13, &iVar0, &iVar1, &iVar2, &iVar3);
  if ((iVar3 > 0 && Global_3934112 > 0) && iVar3 != Global_3934112)
  {
    if (func_4012(Global_2453903.f_1.f_2828) && NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2453903.f_1.f_2828)) == PLAYER::PLAYER_ID())
    {
      if (func_8264(iLocal_523))
      {
        func_4009(iVar0, iVar1, iVar2, Global_2453903.f_1.f_2828, bLocal_526);
      }
      else
      {
        func_4009(iVar0, iVar1, iVar2, Global_2453903.f_1.f_2828, Global_3934112);
      }
      iLocal_446 = Global_3934112;
    }
  }
}