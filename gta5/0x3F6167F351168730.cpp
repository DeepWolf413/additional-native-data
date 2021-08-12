// fbi1.ysc @ L46024
void func_341()
{
  iLocal_1782[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 262.471f, -1357.852f, 24.8703f, 0f, 0f, 63f, 0, -1, 2, true, 0);
  INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_1782[0], "Reception");
  iLocal_1782[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 240.8327f, -1359.421f, 38.6342f, 0f, 0f, 27f, 0, -1, 2, true, 0);
  INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_1782[1], "topoff_right");
  iLocal_1782[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 254.35f, -1342.04f, 24.61f, 0f, 0f, 50f, 0, -1, 2, true, 0);
  INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_1782[2], "AutopsyLargeA");
  iLocal_1782[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 248.13f, -1355.14f, 24.62f, 90f, 0f, -40f, 0, -1, 2, true, 0);
  INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_1782[3], "AutopsyLargeB");
  iLocal_1782[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 241.899f, -1364.692f, 24.9978f, 0f, 0f, -39.44f, 0, -1, 2, true, 0);
  INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_1782[4], "CorridorBottom");
  iLocal_1782[5] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_armour_standard"), 247.6937f, -1374.546f, 38.7342f, 0f, 0f, 20f, 0, -1, 2, true, 0);
  INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_1782[5], "topoff_mid");
}