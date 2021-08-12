// av_drop_rabbit_table.ysc @ L1788
int func_30(var uParam0)
{
  vector3 vVar0;

  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_483, uParam0->f_486.f_2, 1.3375f, -0.4125f, 0.85f) };
  iLocal_37 = VOLUME::_CREATE_VOLUME_BY_HASH(joaat("VOLBOX"), vVar0, uParam0->f_486, 2.2825f, 2.6175f, 2.0875f);
  func_58(&uLocal_9, 0);
  func_59(&uLocal_9, 1);
  func_60(&uLocal_9, 1);
  func_61(&uLocal_9, 1);
  func_62(&uLocal_9, 1);
  func_63(&uLocal_9, 1);
  func_64(&uLocal_9, 1);
  return 1;
}