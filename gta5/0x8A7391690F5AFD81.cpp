// finalec1.ysc @ L109266
void func_685()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1568[0]))
  {
    iLocal_1568[0] = OBJECT::CREATE_OBJECT(func_220(10), 1078.86f, -2043.43f, 31.31f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_1568[0], 89f);
    OBJECT::SET_OBJECT_TARGETTABLE(iLocal_1568[0], true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1570))
  {
    iLocal_1570 = OBJECT::CREATE_OBJECT(func_220(12), 1077.147f, -1969.319f, 30.0447f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_1570, 47f);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_1570, true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1572[0]))
  {
    iLocal_1572[0] = OBJECT::CREATE_OBJECT(func_220(12), 1083.129f, -2056.599f, 30.0244f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_1572[0], 12f);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_1572[0], true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1572[1]))
  {
    iLocal_1572[1] = OBJECT::CREATE_OBJECT(func_220(12), 1084.631f, -2058.26f, 30.0244f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_1572[1], 319f);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_1572[1], true);
  }
}