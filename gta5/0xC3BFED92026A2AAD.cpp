// agency_heist3b.ysc @ L136687
void func_1033(int iParam0)
{
  int iVar0;
  char* sVar1;
  int iVar2;
  
  iVar0 = func_1050();
  if (Global_1312902)
  {
    sVar1 = func_1049(iParam0);
    iVar2 = MISC::GET_HASH_KEY(sVar1);
    func_1048(&Global_2465767, 1, 0);
    NETWORK::_NETWORK_TRANSITION_TRACK(iVar2, 1, iVar0, iParam0, 0);
  }
  if (iParam0 == 2)
  {
    func_1034();
  }
  Global_1312836 = iParam0;
}