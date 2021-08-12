// exile3.ysc @ L127802
void func_912(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_854[0]))
  {
    PED::DELETE_PED(&(iLocal_854[0]));
  }
  if (bParam0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_871))
    {
      VEHICLE::DELETE_MISSION_TRAIN(&iLocal_871);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_872))
    {
      VEHICLE::DELETE_MISSION_TRAIN(&iLocal_872);
    }
  }
  else
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_871))
    {
      VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_871, false);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_872))
    {
      VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_872, false);
    }
  }
}