// beat_wilderness_hanging.ysc @ L2314
void func_66()
{
  if (bLocal_400)
  {
    return;
  }
  func_70(iLocal_382[0], 1);
  ENTITY::_0x18FF3110CF47115D(iLocal_382[0], 7, 1);
  PED::RESET_PED_RAGDOLL_TIMER(iLocal_382[0]);
  TASK::UNCUFF_PED(iLocal_382[0]);
  Local_14.f_44 = 1;
  if (iLocal_395 != 5 && iLocal_395 != 4)
  {
    func_59(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
    iLocal_395 = 4;
  }
  bLocal_400 = true;
}