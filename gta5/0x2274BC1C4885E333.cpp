// agency_heist3a.ysc @ L133153
void func_1021(var uParam0, int iParam1)
{
  CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_10[iParam1 /*57*/].f_1, func_1022(uParam0, iParam1, -1), ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(func_1022(uParam0, iParam1, -1), CAM::GET_GAMEPLAY_CAM_COORD()), true);
}