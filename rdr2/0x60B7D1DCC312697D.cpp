// native2_outro.ysc @ L437
void func_26()
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
  {
    return;
  }
  func_51(iLocal_3);
  iVar1 = VEHICLE::_0x60B7D1DCC312697D(iLocal_3);
  iVar0 = 0;
  while (iVar0 < iVar1)
  {
    iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iVar0);
    func_51(iVar2);
    iVar0++;
  }
  VEHICLE::DELETE_MISSION_TRAIN(&iLocal_3);
}