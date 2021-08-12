// gb_delivery.ysc @ L140461
void func_1498(var uParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (func_11(uParam0->f_11.f_553[0 /*12*/]))
  {
    Var0 = { func_1489(uParam0->f_2) };
    Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_11.f_553[0 /*12*/], true) };
    fVar6 = SYSTEM::VDIST(Var0, Var3);
    fVar7 = 2.5f;
    if (uParam0->f_11.f_617[2] == 0f)
    {
      uParam0->f_11.f_617[2] = fVar6;
    }
    fVar8 = (fVar7 * (fVar6 / uParam0->f_11.f_617[2]));
    fVar8 = (fVar8 * -1f);
    VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_11.f_553[0 /*12*/], false);
    VEHICLE::SET_VEHICLE_BRAKE(uParam0->f_11.f_553[0 /*12*/], 0f);
    VEHICLE::SET_VEHICLE_HANDBRAKE(uParam0->f_11.f_553[0 /*12*/], false);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_11.f_553[0 /*12*/], fVar8);
    AUDIO::_0x97FFB4ADEED08066(uParam0->f_11.f_553[0 /*12*/], 1);
  }
}