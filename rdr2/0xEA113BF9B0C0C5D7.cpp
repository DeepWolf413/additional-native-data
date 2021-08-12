// act_cajav_homerob1.ysc @ L18978
bool func_582(char* sParam0, int iParam1, vector3 vParam2)
{
  int iVar0;
  int iVar1;
  bool bVar2;

  iVar0 = CAM::_0xEA113BF9B0C0C5D7(func_226(), sParam0, 5);
  iVar1 = CAM::_0x465F04F68AD38197(func_226(), sParam0, 5);
  if (!func_204(&uLocal_126) && iVar0 > 0)
  {
    func_218(&uLocal_126);
  }
  else
  {
    iVar0 = (iVar0 - func_586(&uLocal_126));
    iVar1 = (iVar1 - func_586(&uLocal_126));
  }
  bVar2 = STREAMING::IS_SRL_LOADED();
  return AUDIO::_0xFFE9C53DEEA3DB0B(iVar0, iParam1, vParam2, bVar2, iVar1);
}