// saint_denis1.ysc @ L99409
void func_2685(bool bParam0)
{
  ENTITY::SET_ENTITY_VISIBLE(Local_14.f_61[2], bParam0);
  ENTITY::SET_ENTITY_VISIBLE(Local_14.f_61[3], bParam0);
  ENTITY::SET_ENTITY_VISIBLE(Local_14.f_61[4], bParam0);
  ENTITY::SET_ENTITY_VISIBLE(Local_14.f_80[0], bParam0);
  if (!bParam0)
  {
    VEHICLE::_0x41F0B254DDF71473(Local_14.f_80[0]);
  }
  func_886(Local_14.f_80[0], bParam0);
}