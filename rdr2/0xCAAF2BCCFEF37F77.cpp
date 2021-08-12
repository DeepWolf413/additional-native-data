// beechers2_2_intro.ysc @ L1395
bool func_53(int iParam0)
{
  int iVar0;

  OBJECT::DELETE_OBJECT(&(iLocal_51[11]));
  func_162(0);
  if (func_144(68))
  {
  }
  else
  {
    func_163();
    func_164(&uLocal_64, 4);
    iVar0 = 0;
    while (iVar0 < iLocal_51)
    {
      if (iVar0 == 10)
      {
        OBJECT::DELETE_OBJECT(&(iLocal_51[iVar0]));
      }
      else
      {
        OBJECT::_0xCAAF2BCCFEF37F77(iLocal_51[iVar0], 8);
        ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_51[iVar0]));
      }
      iVar0++;
    }
    func_56(iParam0);
  }
  ENTITY::FREEZE_ENTITY_POSITION(uLocal_48[1], false);
  return true;
}