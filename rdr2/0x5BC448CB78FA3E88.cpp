// clemenscove.ysc @ L10963
void func_338(var uParam0)
{
  func_240(&(uParam0->f_46), 1, 1, 1, 0);
  func_230(&(uParam0->f_22));
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
  {
    if (PED::IS_PED_ON_MOUNT(uParam0->f_23))
    {
      PED::_REMOVE_PED_FROM_MOUNT(uParam0->f_23, true, false);
    }
    TASK::TASK_GO_TO_COORD_ANY_MEANS(uParam0->f_23, 721f, -825f, 50f, 3f, 0, false, 524419, -1f);
  }
  if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_64))
  {
    VOLUME::_DELETE_VOLUME(uParam0->f_64);
  }
  if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_65))
  {
    VOLUME::_DELETE_VOLUME(uParam0->f_65);
  }
  func_73(uParam0->f_22);
  func_73(uParam0->f_23);
  func_84(&(uParam0->f_3));
  if (uParam0->f_66 != 0)
  {
    UIFEED::_0x2F901291EF177B02(uParam0->f_66, 1);
  }
  func_53(uParam0, 2);
}