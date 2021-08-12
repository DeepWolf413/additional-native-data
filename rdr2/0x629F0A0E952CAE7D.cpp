// saint_denis1.ysc @ L84237
void func_2117(bool bParam0)
{
  int iVar0;
  bool bVar1;

  iLocal_1756 = 0;
  while (iLocal_1756 < VEHICLE::_0x635423D55CA84FC8(-651487570))
  {
    bVar1 = VEHICLE::GET_TRAIN_CARRIAGE(bParam0, iLocal_1756);
    iVar0 = VEHICLE::_0x8DF5F6A19F99F0D5(-651487570, iLocal_1756);
    AITRANSPORT::_0xBA8818212633500A(bVar1, 0, 1);
    if (iVar0 == joaat("NORTHPASSENGER03X"))
    {
      VEHICLE::SET_VEHICLE_LIGHTS(VEHICLE::GET_TRAIN_CARRIAGE(bParam0, iLocal_1756), 1);
    }
    iLocal_1756++;
  }
}